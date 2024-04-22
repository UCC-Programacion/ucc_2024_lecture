#include "Racional.h"
#include "RacionalV2.h"
#include <iostream>

int main()
{
  std::cout << "u3e02" << std::endl;

  //  Racional r1;
  //  // 0/1
  //  std::cout << r1.get_numerador() << "/" << r1.get_denominador() << "\n";
  //
  //  Racional r2 { 2 };
  //  // 2/1
  //  std::cout << r2.get_numerador() << "/" << r2.get_denominador() << "\n";
  //
  //  Racional r3 { 3, 2 };
  //  // 3/2
  //  std::cout << r3.get_numerador() << "/" << r3.get_denominador() << "\n";
  //
  //  RacionalV2 r11;
  //  // 0/1
  //  std::cout << r11.get_numerador() << "/" << r11.get_denominador() << "\n";
  //
  //  RacionalV2 r22 { 2 };
  //  // 2/1
  //  std::cout << r22.get_numerador() << "/" << r22.get_denominador() << "\n";
  //
  //  RacionalV2 r33 { 3, 2 };
  //  // 3/2
  //  std::cout << r33.get_numerador() << "/" << r33.get_denominador() << "\n";

  {

    Racional r1 { 1, 2 };
    Racional r2 { 3, 4 };
    //    Racional r3 = r1.sumar(r2);
    Racional r3 = r1 + r2;

    std::cout << "sumar " << r3 << "\n";
    //    std::cout.operator<<("sumar") << r3.get_numerador() << "/" << r3.get_denominador() << "\n";
  }

  {
    Racional r1 { 1, 2 };
    Racional r3 = r1 - r1;
    std::cout << "restar " << r3 << "\n";
    //    std::cout << "restar " << r3.get_numerador() << "/" << r3.get_denominador() << "\n";
  }

  {
    Racional r1 { 1, 2 };
    std::cout << "incrementar antes " << r1 << "\n";
    ++(++r1);
    std::cout << "incrementar despues " << r1 << "\n";
    Racional r2 { 1, 2 };
    std::cout << "incrementar antes " << r2 << "\n";
    r2++;
    std::cout << "incrementar despues " << r2 << "\n";
  }

  {
    Racional r1 { 1, 2 };
    Racional r2 = r1 + 3;
    std::cout << "sumar entero a racional " << r2 << "\n";
  }

  {
    Racional r1 { 4, 9 };
    std::cout << "simplificar " << r1.simplificar() << "\n";
  }
}
