#include <iostream>

void intercambiar(int& a, int& b)
{
  int temp = a;
  a = b;
  b = temp;
}

void direccion_por_copia(int a)
{
  std::cout << "copia &a = " << &a << "\n";
}

void direccion_por_referencia(int& a)
{
  std::cout << "referencia &a = " << &a << "\n";
}

int main()
{
  std::cout << "u1e07" << std::endl;

  int x = 5;
  int y = 7;

  std::cout << "antes\n";
  std::cout << "x = " << x << "\n";
  std::cout << "y = " << y << "\n";

  intercambiar(x, y);

  std::cout << "despues\n";
  std::cout << "x = " << x << "\n";
  std::cout << "y = " << y << "\n";

  std::cout << "en main &x = " << &x << "\n";
  direccion_por_copia(x);
  direccion_por_referencia(x);
}
