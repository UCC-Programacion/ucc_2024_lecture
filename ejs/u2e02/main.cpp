#include <iostream>

int main()
{
  std::cout << "u2e02" << std::endl;
  const int size = 5;
  int a[size] = { 1, 2, 3, 4, 5 };

  for (int i = 0; i < size; ++i) {
    std::cout << "&a[" << i << "] = " << &a[i] << "\n";
  }

  bool bools[size] = { true, true, false, false, false };

  for (int i = 0; i < size; ++i) {
    std::cout << "&chars[" << i << "] = " << &bools[i] << "\n";
  }

  std::cout << "sizeof(int) " << sizeof(int) << "\n";
  std::cout << "sizeof(bool) " << sizeof(bool) << "\n";
}
