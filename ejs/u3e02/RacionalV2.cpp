#include "RacionalV2.h"
#include <cassert>

RacionalV2::RacionalV2()
  : RacionalV2(0)
{
}

RacionalV2::RacionalV2(int numerador)
  : RacionalV2(numerador, 1)
{
}

RacionalV2::RacionalV2(int numerador, int denominador)
  : m_numerador { numerador }
  , m_denominador { denominador }
{
  assert(denominador != 0);
}

int RacionalV2::get_numerador()
{
  return m_numerador;
}

int RacionalV2::get_denominador()
{
  return m_denominador;
}
