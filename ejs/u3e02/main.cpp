#include "Racional.h"
#include "RacionalV2.h"
#include <iostream>

int main()
{
  std::cout << "u3e02" << std::endl;

  Racional r1;
  // 0/1
  std::cout << r1.get_numerador() << "/" << r1.get_denominador() << "\n";

  Racional r2 { 2 };
  // 2/1
  std::cout << r2.get_numerador() << "/" << r2.get_denominador() << "\n";

  Racional r3 { 3, 2 };
  // 3/2
  std::cout << r3.get_numerador() << "/" << r3.get_denominador() << "\n";

  RacionalV2 r11;
  // 0/1
  std::cout << r11.get_numerador() << "/" << r11.get_denominador() << "\n";

  RacionalV2 r22 { 2 };
  // 2/1
  std::cout << r22.get_numerador() << "/" << r22.get_denominador() << "\n";

  RacionalV2 r33 { 3, 2 };
  // 3/2
  std::cout << r33.get_numerador() << "/" << r33.get_denominador() << "\n";
}
