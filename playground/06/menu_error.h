#pragma once

#include <stdexcept>

namespace menu {

class OpcionNoImplementadaError : public std::logic_error {
public:
  OpcionNoImplementadaError()
    : std::logic_error { "opcion no implementada" }
  {
  }
};

class OpcionNoValidaError : public std::logic_error {
public:
  OpcionNoValidaError()
    : std::logic_error { "opcion no valida" }
  {
  }
};

} // namespace menu
