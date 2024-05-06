#pragma once

#include "Usuario.h"
#include <string>

class Organizacion {
private:
  std::string m_nombre;
  Usuario m_administrador;

public:
  void subscribir();
};