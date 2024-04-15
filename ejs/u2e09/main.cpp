#include <iostream>

int* crear_array(int size)
{
  int* out = new int[size] {};
  return out;
}

int main()
{
  std::cout << "u2e09" << std::endl;

  const int size = 5;
  int* a = crear_array(size);

  for (int i = 0; i < size; ++i) {
    a[i] = i * 2;
  }

  for (int i = 0; i < size; ++i) {
    std::cout << "a[i] = " << a[i] << " *(a + i) = " << *(a + i) << "\n";
  }
  std::cout << "\n";

  delete[] a;
}
