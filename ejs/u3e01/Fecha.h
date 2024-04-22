#pragma once

#include <cassert>

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

  Fecha(int anio, unsigned int mes, unsigned int dia)
    : m_anio { anio }
    , m_mes { mes }
    , m_dia { dia }
  {
    assert(mes >= 1 && mes <= 12);

    assert(dia >= 1 && dia <= Fecha::DIAS_POR_MES[mes]);
  }

private:
  unsigned int m_dia;
  unsigned int m_mes;
  int m_anio;
};