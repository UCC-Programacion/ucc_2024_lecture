#pragma once

#include <cassert>
#include <iostream>
#include <numeric>

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

  int get_numerador() const
  {
    return m_numerador;
  }

  int get_denominador() const
  {
    return m_denominador;
  }

  Racional& operator++()
  {
    m_numerador += m_denominador;
    return *this;
  }

  Racional operator++(int)
  {
    Racional temp = *this;
    m_numerador += m_denominador;
    return temp;
  }

  // TODO: implementar pre/post decrementar

  Racional simplificar() const
  {
    int gcd = std::gcd(m_numerador, m_denominador);
    return Racional { m_numerador / gcd, m_denominador / gcd };
  };

  //  void simplificar()
  //  {
  //    int gcd = std::gcd(m_numerador, m_denominador);
  //    m_numerador = m_numerador / gcd;
  //    m_denominador = m_denominador / gcd;
  //  };
};

//  1/2 + 3/4
// = (1*4 + 2*3) / 2*4
Racional operator+(const Racional& r1, const Racional& r2)
{
  int numerador = r1.get_numerador() * r2.get_denominador() + r1.get_denominador() * r2.get_numerador();
  int denominador = r1.get_denominador() * r2.get_denominador();
  Racional out { numerador, denominador };
  return out;
}

Racional operator+(const Racional& r1, int n)
{
  int numerador = r1.get_numerador() * 1 + r1.get_denominador() * n;
  int denominador = r1.get_denominador() * 1;
  Racional out { numerador, denominador };
  return out;
}

Racional operator-(const Racional& r1, const Racional& r2)
{
  int numerador = r1.get_numerador() * r2.get_denominador() - r1.get_denominador() * r2.get_numerador();
  int denominador = r1.get_denominador() * r2.get_denominador();
  Racional out { numerador, denominador };
  return out;
}

std::ostream& operator<<(std::ostream& os, const Racional& racional)
{
  os << racional.get_numerador() << "/" << racional.get_denominador();
  return os;
}