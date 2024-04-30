#pragma once

#include <cassert>
#include <iostream>

class Fecha {
public:
  static constexpr int DIAS_POR_MES[] = {
    0,
    31, // enero
    28, // febrero
    31, // marzo
    30, // abril
    31, // mayo
    30, // junio
    31, // julio
    31, // agosto
    30, // septiembre
    31, // octubre
    30, // noviembre
    31 // diciembre
  };

  Fecha(int anio = 1900, unsigned int mes = 1, unsigned int dia = 1)
    : m_anio { anio }
    , m_mes { mes }
    , m_dia { dia }
  {
    assert(mes >= 1 && mes <= 12);
    assert(dia >= 1 && dia <= Fecha::DIAS_POR_MES[mes]);
  }

  unsigned int get_dia() const
  {
    return m_dia;
  }

  unsigned int get_mes() const
  {
    return m_mes;
  }

  int get_anio() const
  {
    return m_anio;
  }

private:
  unsigned int m_dia;
  unsigned int m_mes;
  int m_anio;
};

std::ostream& operator<<(std::ostream& os, const Fecha& fecha)
{
  os << fecha.get_dia() << "/"
     << fecha.get_mes() << "/"
     << fecha.get_anio();
  return os;
}