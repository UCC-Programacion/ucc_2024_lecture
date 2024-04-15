#pragma once

#include <cassert>

class Racional {
private:
  int m_numerador;
  int m_denominador;

public:
  Racional()
    : Racional(0)
  {
  }

  Racional(int numerador)
    : Racional(numerador, 1)
  {
  }

  Racional(int numerador, int denominador)
    : m_numerador { numerador }
    , m_denominador { denominador }
  {
    assert(denominador != 0);
  }

  //  Racional(int numerador = 0, int denominador = 1)
  //    : m_numerador { numerador }
  //    , m_denominador { denominador }
  //  {
  //    assert(denominador != 0);
  //  }

  int get_numerador()
  {
    return m_numerador;
  }

  int get_denominador()
  {
    return m_denominador;
  }
};