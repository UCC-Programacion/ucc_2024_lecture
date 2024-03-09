#include <concepts>
#include <iostream>
#include <type_traits>

// https://www.modernescpp.com/index.php/dynamic-and-static-polymorphism

// compile with c++20 standard
// g++ -std=c++20 main.cpp

using std::cout;

// Dynamic Polymorphism (dp)
namespace dp {

class Base {
public:
  virtual void print() = 0;
};

class Foo : public Base {
  void print() override { cout << "dp::Foo\n"; }
};

class Bar : public Base {
  void print() override { cout << "dp::Bar\n"; }
};

} // namespace dp

void print_dp(dp::Base& base) { base.print(); }

// Static Polymorphism (sp)
namespace sp {

class Foo {
public:
  void print() { cout << "sp::Foo\n"; }
};

class Bar {
public:
  void print() { cout << "sp::Bar\n"; }
};

} // namespace sp

template <typename T>
void print_sp(T& t) { t.print(); }

// C++20 with a Printable concept
template <typename T>
concept Printable = requires(T t) { t.print(); };

template <Printable T>
void print_sp_v2(T& t) { t.print(); }

// C++20 with an inline constraint
template <typename T>
  requires requires(T t) { t.print(); }
void print_sp_v3(T& t)
{
  t.print();
}

int main()
{

  {
    dp::Foo foo;
    dp::Bar bar;

    print_dp(foo);
    print_dp(bar);
  }

  {
    sp::Foo foo;
    sp::Bar bar;

    print_sp(foo);
    print_sp(bar);

    print_sp_v2(foo);
    print_sp_v2(bar);

    print_sp_v3(foo);
    print_sp_v3(bar);
  }

  return 0;
}
