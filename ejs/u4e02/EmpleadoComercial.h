#pragma once

#include "Empleado.h"
#include "Fecha.h"
#include <cassert>
#include <string>

class EmpleadoComercial : public Empleado {
private:
  float m_comision;

public:
  EmpleadoComercial(
    std::string nombre,
    int edad,
    float salario,
    Fecha ingreso,
    float comision)
    : Empleado { nombre, edad, salario, ingreso }
    , m_comision { comision }
  {
    assert(comision >= 0);
  }

  float get_comision() const
  {
    return m_comision;
  }

  void plus() override
  {
    if (get_edad() > 30 && m_comision > 0.12) {
      set_salario(get_salario() + 3000);
    }
  }
};
