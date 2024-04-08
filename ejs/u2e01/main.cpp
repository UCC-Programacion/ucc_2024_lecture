#include <iostream>

int main()
{
  std::cout << "u2e01" << std::endl;
  int a { 3 };
  int b { 4 };

  int* ptr;
  ptr = &a;

  std::cout << "&a   = " << &a << "\n"
            << "ptr  = " << ptr << "\n"
            << "*ptr = " << *ptr << "\n";

  ptr = &b;
  std::cout << "&b   = " << &b << "\n"
            << "ptr  = " << ptr << "\n"
            << "*ptr = " << *ptr << "\n";
}
