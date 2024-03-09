#include <concepts>
#include <iostream>
#include <type_traits>

// https://hackingcpp.com/cpp/lang/concepts.html
// https://www.cppstories.com/2021/concepts-intro/

// compile with c++20 standard
// g++ -std=c++20 main.cpp

class Dummy { };

template <typename T>
concept Numberic = std::integral<T> || std::floating_point<T>;

template <Numberic T>
class Container {
private:
  T m_data;

public:
  Container(T data)
    : m_data { data }
  {
  }

  friend std::ostream& operator<<(std::ostream& os, const Container& dummy)
  {
    os << "Container{" << dummy.m_data << "}";
    return os;
  }
};

template <typename T>
concept Addable = requires(T t) { t + t; };

template <Addable T>
T add(T a, T b) { return a + b; }

template <typename T>
concept HasAddOperator = requires(T t) {
  { t + t } -> std::same_as<T>;
};

template <typename T>
  requires HasAddOperator<T>
T add_v2(T a, T b)
{
  return a + b;
}

template <typename T>
concept Streamable = requires(std::ostream& os, T t) {
  { os << t };
};

template <Streamable T>
void print(T& v)
{
  std::cout << "print: " << v << "\n";
}

template <typename T>
concept HasOutputOperator = requires(T t, std::ostream& os) {
  { os << t } -> std::same_as<std::ostream&>;
};

template <typename T>
void maybe_print(T& data)
{
  if constexpr (HasOutputOperator<T>) {
    std::cout << "maybe_print: " << data << "\n";
  } else {
    std::cout << "maybe_print: Printing not supported for this type."
              << std::endl;
  }
}

int main()
{
  using std::cout;

  Dummy dummy;

  Container container1 { 1 }; // Container<int>
  Container container2 { 1.5 }; // Container<double>
  //  Container c3{"aaa"};   // compile error not-Numeric

  cout << "add(1, 2) = " << add(1, 2) << "\n";
  // compile error 'Dummy' does not satisfy 'Addable'
  // cout << "add(dummy, dummy) = " << add(dummy, dummy) << "\n";

  int add_v2_double_result = add_v2(1, 2);
  float add_v2_float_result = add_v2<float>(1.0, 2.0);

  print(container1);
  // compile error 'Dummy' does not satisfy 'Streamable'
  // print(dummy);

  maybe_print(container2);

  // Dummy dummy;
  maybe_print(dummy);

  return 0;
}
