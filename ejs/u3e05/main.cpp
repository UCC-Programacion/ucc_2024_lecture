#include <iostream>

class CoordenadaPolar;

class CoordenadaCartesiana {
private:
  double m_x;
  double m_y;

public:
  CoordenadaCartesiana(double x, double y)
    : m_x { x }
    , m_y { y }
  {
  }
  double get_x() const;
  double get_y() const;
  CoordenadaPolar convertir_a_polares();
};

class CoordenadaPolar {
private:
  double m_angulo;
  double m_radio;

public:
  CoordenadaPolar(double angulo, double radio)
    : m_angulo { angulo }
    , m_radio { radio }
  {
  }
  double get_angulo() const;
  double get_radio() const;

  CoordenadaCartesiana convertir_a_cartesianas();
};

CoordenadaPolar CoordenadaCartesiana::convertir_a_polares()
{
  double angulo = 0; // todo: calcular m_x y m_y
  double radio = 0; // todo: calcular m_x y m_y

  return CoordenadaPolar { angulo, radio };
};

CoordenadaCartesiana CoordenadaPolar::convertir_a_cartesianas()
{
  double x = 0; // usar m_angulo y m_radio para calcular
  double y = 0; // usar m_angulo y m_radio para calcular
  return CoordenadaCartesiana { x, y };
}

int main()
{
  std::cout << "u3e05" << std::endl;
  CoordenadaCartesiana cc { 1, 1 };

  CoordenadaPolar cp = cc.convertir_a_polares();

  // std::cout << "angulo: " << cp.get_angulo()
  //           << " radio " << cp.get_radio()
  //           << "\n";

  CoordenadaCartesiana cc1 = cp.convertir_a_cartesianas();
}
