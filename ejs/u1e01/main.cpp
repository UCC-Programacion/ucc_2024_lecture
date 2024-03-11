#include <cassert>
#include <iostream>

int calcularSaltos(int x, int y, int d);

int main()
{
  // casos de prueba
  assert(2 == calcularSaltos(1, 6, 3));
  assert(0 == calcularSaltos(1, 1, 3));
  assert(3 == calcularSaltos(0, 9, 3));

  int x;
  int y;
  int d;
  std::cout << "ingrese x: ";
  std::cin >> x;
  std::cout << "ingrese y: ";
  std::cin >> y;
  std::cout << "ingrese d: ";
  std::cin >> d;

  std::cout << "tiene que saltar " << calcularSaltos(x, y, d) << "\n";
}

int calcularSaltos(int x, int y, int d)
{
  assert(x <= y);
  assert(d > 0);

  int saltoExtra = ((y - x) % d) > 0 ? 1 : 0;
  return ((y - x) / d) + saltoExtra;
}
