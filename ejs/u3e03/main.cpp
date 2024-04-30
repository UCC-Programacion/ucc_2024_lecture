#include "Complejo.h"
#include <iostream>

void imprimir(Complejo& c)
{
  std::cout << c.get_real() << " + " << c.get_imaginario() << "i\n";
}

int main()
{
  std::cout << "u3e03" << std::endl;

  Complejo c { 1, -2 };

  imprimir(c);

  Complejo conjugado = c.conjugado();

  imprimir(conjugado);

  {
    Complejo a { 1, 1 };
    Complejo b { 2, 2 };
    Complejo c = a + b;
    imprimir(c);
  }
}
