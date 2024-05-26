#include <concepts>
#include <exception>
#include <iostream>
#include <stdexcept>

// https://hackingcpp.com/cpp/lang/templates.html
// https://hackingcpp.com/cpp/lang/concepts.html
// https://en.cppreference.com/w/cpp/concepts
// ver cookbook/13_templates_concept

template <class T>
  requires std::integral<T>

class X {
  T m_a;
};

int main()
{
  X<int> x;
}
