#include "Empleado.h"
#include "EmpleadoComercial.h"
#include "EmpleadoRepartidor.h"
#include "Fecha.h"
#include <iostream>
#include <vector>

// funcion polimorfica
// Una función que puede evaluarse o aplicarse a valores de diferentes tipos
// se conoce como función polimórfica
void imprimir(const Empleado& empleado)
{
  std::cout << "nombre: " << empleado.get_nombre() << "\n"
            << "salario: " << empleado.get_salario() << "\n"
            << "edad: " << empleado.get_edad() << "\n"
            << "fecha de ingreso: " << empleado.get_ingreso() << "\n"
            << "\n";
}

void invocar_plus(Empleado& empleado)
{
  // invoco metodo polimorfico
  empleado.plus();
}

int main()
{
  std::cout << "u4e02" << std::endl;

  std::cout << "Empleado Comercial\n";
  EmpleadoComercial empleado_comercial { "comercial", 31, 10000, Fecha { 2020, 1, 1 }, 0.13 };
  imprimir(empleado_comercial);
  invocar_plus(empleado_comercial);
  std::cout << "Empleado Comercial despues de invocar plus\n";
  imprimir(empleado_comercial);

  std::cout << "Empleado Repartidor\n";
  EmpleadoRepartidor empleado_repartidor { "repartidor", 24, 5000, Fecha { 2020, 2, 1 }, 3 };
  imprimir(empleado_repartidor);
  invocar_plus(empleado_repartidor);
  std::cout << "Empleado Repartidor despues de invocar plus\n";
  imprimir(empleado_repartidor);

  {
    std::cout << "Arreglo de punteros a empleados\n";
    // arreglo de punteros a empleados
    Empleado* empleados[] = { &empleado_comercial, &empleado_repartidor };
    for (size_t i = 0; i < 2; i++) {
      imprimir(*empleados[i]);
    }
  }

  {
    std::cout << "Vector de punteros a empleados\n";
    // vector de punteros a empleados
    std::vector<Empleado*> empleados;
    empleados.push_back(&empleado_comercial);
    empleados.push_back(&empleado_repartidor);
    for (size_t i = 0; i < empleados.size(); i++) {
      imprimir(*empleados[i]);
    }
  }
}
