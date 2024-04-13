#include "u1e05.h"

namespace u1e05 {

int buscar_indice(int a[], size_t size, int k)
{
  for (int i = 0; i < size; ++i) {
    if (a[i] == k) {
      return i;
    }
  }
  return -1;
}

int divisores_semiprimos_unicos(int n, int divisores[])
{
  int cantidad_divisores = 0;
  for (int i = 2; i <= n; ++i) {
    while (n % i == 0 && buscar_indice(divisores, cantidad_divisores, i) == -1) {
      divisores[cantidad_divisores++] = i;
      n /= i;
    }
  }
  return cantidad_divisores;
}

bool comparten_divisores_semiprimos(int a, int b)
{
  // se podria mejorar con un vector<int> o set<int> en vez de int[100]
  int divisores_a[100] = { 0 };
  int divisores_b[100] = { 0 };
  int cantidad_divisores_a = divisores_semiprimos_unicos(a, divisores_a);
  int cantidad_divisores_b = divisores_semiprimos_unicos(b, divisores_b);

  if (cantidad_divisores_a != cantidad_divisores_b) {
    return false;
  }

  for (int i = 0; i < cantidad_divisores_a; ++i) {
    if (divisores_a[i] != divisores_b[i]) {
      return false;
    }
  }

  return true;
}

}