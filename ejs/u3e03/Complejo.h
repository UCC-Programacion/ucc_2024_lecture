#pragma once

#include <cassert>
#include <iostream>

class Complejo {
private:
  float m_real;
  float m_imaginario;

public:
  Complejo()
    : m_real { 0 }
    , m_imaginario { 0 } {};
  Complejo(float real, float imaginario)
    : m_real { real }
    , m_imaginario { imaginario } {};

  float get_real() const
  {
    return m_real;
  }

  float get_imaginario() const
  {
    return m_imaginario;
  }

  // no es responsabilidad de la clase mostrarse
  // quien la usa, usa los getter de la clase para mostrar
  //   void mostarcomplejo()
  //   {
  //     std::cout << "z=" << m_real << "+" << m_imaginario << "i" << std::endl;
  //   }

  Complejo conjugado() const
  {
    float imaginario;
    if (m_imaginario > 0) {
      imaginario = m_imaginario;
    } else {
      imaginario = m_imaginario * -1;
    }
    return Complejo { m_real, imaginario };
  }
};

Complejo operator+(const Complejo& comp1, const Complejo& comp2)
{
  float real = comp1.get_real() + comp2.get_imaginario();
  float imaginario = comp1.get_real() + comp2.get_imaginario();
  Complejo out = { real, imaginario };
  return out;
}

// TODO: implementar
// Complejo operator-(Complejo& comp1, Complejo& comp2)
// {
//   float real = comp1.m_real - comp2.m_real;
//   float imaginario = comp1.m_imaginario - comp2.m_imaginario;
//   Complejo out = { real, imaginario };
//   return out;
// }

// TODO: implementar
// Complejo operator*(Complejo& comp1, Complejo& comp2)
// {
//   float real = comp1.m_real * comp2.m_real;
//   float imaginario = comp1.m_imaginario * comp2.m_imaginario;
//   Complejo out = { real, imaginario };
//   return out;
// }
