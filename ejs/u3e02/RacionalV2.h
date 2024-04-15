#pragma once

class RacionalV2 {
private:
  int m_numerador;
  int m_denominador;

public:
  RacionalV2();

  RacionalV2(int numerador);
  RacionalV2(int numerador, int denominador);
  int get_numerador();
  int get_denominador();
};
