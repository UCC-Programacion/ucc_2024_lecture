#include "SmartDynamicIntArray.h"
#include <iostream>

int main()
{
  using cookbook::SmartDynamicIntArray;
  
  SmartDynamicIntArray a { 5 };
  for (int i = 0; i < a.size(); ++i) {
    a[i] = i;
  }

  std::cout << "a = " << a << "\n";

  {
    SmartDynamicIntArray b = a;
    b[0] = 10;
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
  }

  {
    SmartDynamicIntArray b { a };
    b[0] = 20;
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
  }

  {
    SmartDynamicIntArray b;
    b = a;
    b[0] = 30;
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
  }

  return 0;
}