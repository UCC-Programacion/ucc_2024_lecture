#include "u1e06.h"
#include <cassert>
#include <iostream>

int main()
{
  std::cout << "u1e06" << std::endl;

  using u1e06::es_semiprimo;

  assert(es_semiprimo(4) == true);
  assert(es_semiprimo(6) == true);
  assert(es_semiprimo(9) == true);

  assert(es_semiprimo(1) == false);
  assert(es_semiprimo(2) == false);
  assert(es_semiprimo(3) == false);
  assert(es_semiprimo(5) == false);
  assert(es_semiprimo(7) == false);
  assert(es_semiprimo(8) == false);
}
