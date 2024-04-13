#include "u1e06.h"

namespace u1e06 {

bool es_primo(int n)
{
  if (n <= 1) {
    return false;
  }
  // El método consiste en dividir al número dado por todos
  // los números menores o iguales a su raíz cuadrada,
  // si ninguno de los cocientes es entero se puede deducir que el número es primo.
  // Esto se debe a que, si el número tiene algún divisor mayor a su raíz cuadrada,
  // entonces el cociente entre éstos es otro divisor que es menor o igual a su raíz cuadrada.
  for (int i = 2; i * i <= n; ++i) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

bool es_semiprimo(int n)
{
  for (int i = 2; i * i <= n; ++i) {
    if (es_primo(i) && (n % i == 0 && es_primo(n / i))) {
      return true;
    }
  }
  return false;
}

}