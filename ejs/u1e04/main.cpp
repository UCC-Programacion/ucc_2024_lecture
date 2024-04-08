#include <cassert>
#include <iostream>

// 5! = 5 * 4 * 3 * 2 * 1
// 4! = 4 * 3 * 2 * 1

// 5! = 5 * 4!
// n! = n * (n-1)!

int factorial(int n)
{
  assert(n >= 0);
  if (n == 1 || n == 0) {
    return 1;
  }
  return n * factorial(n - 1);
}

int main()
{
  std::cout << "factorial(3) = " << factorial(3) << std::endl;
  std::cout << "factorial(-1) = " << factorial(-1) << std::endl;
}
