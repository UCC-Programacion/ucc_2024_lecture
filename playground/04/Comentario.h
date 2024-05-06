#pragma once

#include "Usuario.h"
#include <string>

class Comentario {
private:
  std::string m_texto;
  Usuario m_autor;

public:
  void reply(std::string respuesta);
};