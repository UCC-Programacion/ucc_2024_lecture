#include "u1e05.h"
#include "u1e05v2.h"
#include "u1e05v3.h"
#include <cassert>
#include <iostream>

int main()
{
  std::cout << "u1e05" << std::endl;

  assert(u1e05::comparten_divisores_semiprimos(15, 75) == true);
  assert(u1e05::comparten_divisores_semiprimos(10, 30) == false);

  assert(u1e05v2::comparten_divisores_semiprimos(15, 75) == true);
  assert(u1e05v2::comparten_divisores_semiprimos(10, 30) == false);

  assert(u1e05v3::comparten_divisores_semiprimos(15, 75) == true);
  assert(u1e05v3::comparten_divisores_semiprimos(10, 30) == false);

  {
    using u1e05v3::comparten_divisores_semiprimos;
    assert(comparten_divisores_semiprimos(15, 75) == true);
    assert(comparten_divisores_semiprimos(10, 30) == false);
  }

  return 0;
}
