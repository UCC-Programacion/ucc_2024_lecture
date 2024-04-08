#include <cassert>
#include <iostream>

int encontrar_ubicacion(int a[], int size, int k)
{
  assert(size >= 0);
  for (int i = 0; i < size; ++i) {
    if (a[i] == k) {
      return i;
    }
  }
  return -1;
}

bool esta_presente(int a[], int size, int k)
{
  assert(size >= 0);

  return encontrar_ubicacion(a, size, k) != -1;

  //  int ubicacion = encontrar_ubicacion(a, size, k);
  //  if (ubicacion == -1) {
  //    return false;
  //  } else {
  //    return true;
  //  }

  //  for (int i = 0; i < size; ++i) {
  //    if (a[i] == k) {
  //      return true;
  //    }
  //  }
  //
  //  return false;
}

int main()
{
  const int size = 5;
  int a[size] = { 1, 2, 3, 4, 5 };

  int k = 3;
  std::cout << "esta el k = " << k << " "
            << esta_presente(a, size, k) << std::endl;
  std::cout << "ubicacion de en a[] k = " << k << " es "
            << encontrar_ubicacion(a, size, k) << std::endl;

  k = -1;
  std::cout << "esta el k = " << k << " "
            << esta_presente(a, size, k) << std::endl;
}
