#include <concepts>
#include <exception>
#include <iostream>
#include <stdexcept>

// https://hackingcpp.com/cpp/lang/templates.html
// ver cookbook/01_swap
// ver cookbook/12_templates_stl

template <class T>
T sum(T a, T b)
{
  return a + b;
}

template <class T>
T mul(T a, T b)
{
  return a * b;
}

int main()
{
  {
    int a = 1;
    int b = 1;
    std::cout << sum(a, b) << "\n";
  }
  {
    float a = 1.5;
    float b = 1;
    std::cout << sum(a, b) << "\n";
  }
  {
    float a = 1.5;
    int b = 1;
    // std::cout << sum(a, b) << "\n";
    // error: no matching function for call to 'sum'
  }

  {
    std::string a = "a";
    std::string b = "b";
    std::cout << sum(a, b) << "\n";
  }

  {
    std::string a = "a";
    std::string b = "b";
    // std::cout << mul(a, b) << "\n";
    // error: invalid operands to binary expression ('std::string' and 'std::string')
  }

  return 0;
}

template <class T>
class X {
  T m_a;
};