#include <iostream>

int main()
{
  std::cout << "u2e03" << std::endl;

  const int size = 5;
  int a[size] = { 1, 2, 3, 4, 5 };

  int* a_ptr0 = &a[0];
  //  int* a_ptr0 = a;

  int* a_ptr4 = &a[size - 1];

  std::cout << "a_ptr4 - a_ptr0 = " << a_ptr4 - a_ptr0 << "\n";
}
