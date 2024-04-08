#include "Random.h"
#include <iostream>

int main()
{
  std::cout << "u2e04" << std::endl;

  const int size = 15;
  int a[size];

  for (int i = 0; i < size; ++i) {
    a[i] = Random::get(0, 100);
  }

  int* a_ptr = a;
  for (int i = 0; i < size; ++i) {
    std::cout << "a_ptr " << a_ptr << " = " << *a_ptr << "\n";
    a_ptr++;
  }

  a_ptr = a;
  for (int i = 0; i < size; ++i) {
    std::cout << "(a_ptr + " << i << ") " << (a_ptr + i) << " = " << *(a_ptr + i) << "\n";
  }
}
