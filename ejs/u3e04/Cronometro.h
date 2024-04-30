#pragma once

#include <cassert>

class Cronometro {
private:
  int m_segundos;
  int m_minutos;
  int m_horas;

public:
  Cronometro(int horas, int minutos, int segundos)
    : m_horas { horas }
    , m_minutos { minutos }
    , m_segundos { segundos }
  {
    assert(horas >= 0);
    assert(minutos >= 0 && minutos < 60);
    assert(segundos >= 0 && segundos < 60);
  }
};
