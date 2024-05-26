#pragma once

#include "Racional.h"
#include "menu_error.h"
#include "menu_input_utils.h"
#include <iostream>

namespace menu {

Racional crear_racional()
{
  while (true) {
    int numerador = get_int("Ingrese numerador: ");
    int denominador = get_int("Ingrese denominador: ");

    try {
      return Racional { numerador, denominador };
    } catch (const Racional::DenominadorEnCeroError& e) {
      std::cout << "el denominador no puede ser 0\n";
    }
  }
}

void sumar_racional()
{
  std::cout << "Sumar racional\n"
            << "==============\n\n";
  std::cout << "Ingrese el 1er racional:\n";
  Racional r1 = crear_racional();

  std::cout << "Ingrese el 2do racional:\n";
  Racional r2 = crear_racional();

  std::cout << "la suma de "
            << r1 << "+" << r2
            << " es: " << (r1 + r2).simplificar() << "\n";
}

void restar_racional()
{
  throw std::logic_error { "restar racional no esta implementado" };
}

void multiplicar_racional()
{
  throw OpcionNoImplementadaError {};
}

void procesar_opcion(int opcion)
{
  switch (opcion) {
  case 1: {
    sumar_racional();
    break;
  }
  case 2: {
    restar_racional();
    break;
  }
  case 3: {
    multiplicar_racional();
    break;
  }
  default: {
    throw OpcionNoValidaError {};
  }
  }
}

void mostrar()
{
  while (true) {
    std::cout << "\nMenu\n"
              << "====\n"
              << "Seleccione una opcion\n"
              << "1. sumar racionales\n"
              << "2. restar racionales\n"
              << "3. multiplicar racionales\n"
              << "0. salir\n\n";

    int opcion = get_int("Ingrese una opcion (0-3): ");

    if (opcion == 0)
      break;

    std::cout << "\n";

    try {
      procesar_opcion(opcion);
    } catch (const OpcionNoImplementadaError& e) {
      std::cout << "opcion '" << opcion << "' no implementada\n";
    } catch (const OpcionNoValidaError& e) {
      std::cout << "opcion '" << opcion << "' no valida\n";
    }
  }
}

};