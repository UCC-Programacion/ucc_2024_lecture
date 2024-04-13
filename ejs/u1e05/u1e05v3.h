#pragma once

#include <cstddef>
#include <set>

namespace u1e05v3 {

inline std::set<int> divisores_semiprimos_unicos(int n)
{
  std::set<int> divisores;
  for (int i = 2; i <= n; ++i) {
    while (n % i == 0 && !divisores.contains(i)) {
      divisores.insert(i);
      n /= i;
    }
  }
  return divisores;
}

inline bool comparten_divisores_semiprimos(int a, int b)
{
  auto divisores_a = divisores_semiprimos_unicos(a);
  auto divisores_b = divisores_semiprimos_unicos(b);
  return divisores_a == divisores_b;
}

}