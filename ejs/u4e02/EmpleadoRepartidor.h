#pragma once

#include "Empleado.h"
#include "Fecha.h"
#include <cassert>
#include <string>

class EmpleadoRepartidor : public Empleado {
private:
  int m_zona;

public:
  EmpleadoRepartidor(
    std::string nombre,
    int edad,
    float salario,
    Fecha ingreso,
    int zona)
    : Empleado { nombre, edad, salario, ingreso }
    , m_zona { zona }
  {
    assert(zona > 0);
  }

  int get_zona() const
  {
    return m_zona;
  }

  void plus() override
  {
    if (get_edad() < 25 && m_zona == 3) {
      set_salario(get_salario() + 3000);
    }
  }
};