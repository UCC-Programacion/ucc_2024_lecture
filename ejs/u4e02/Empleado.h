#pragma once

#include "Fecha.h"
#include <cassert>
#include <string>

class Empleado {
private:
  std::string m_nombre;
  int m_edad;
  float m_salario;
  // agrego fecha de ingreso para mostrar composicion
  Fecha m_ingreso;

protected:
  void set_salario(float salario)
  {
    assert(salario > 0);
    m_salario = salario;
  }

public:
  Empleado(
    std::string nombre,
    int edad,
    float salario,
    Fecha ingreso)
    : m_nombre { nombre }
    , m_edad { edad }
    , m_salario { salario }
    , m_ingreso { ingreso }
  {
    assert(nombre.size() > 0);
    assert(edad >= 18);
    assert(salario > 0);
  }

  std::string get_nombre() const
  {
    return m_nombre;
  }

  int get_edad() const
  {
    return m_edad;
  }

  float get_salario() const
  {
    return m_salario;
  }

  Fecha get_ingreso() const
  {
    return m_ingreso;
  }

  virtual void plus() = 0;
};
