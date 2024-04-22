#include <cassert>
#include <iostream>

using namespace std;

class Persona {
private:
  string m_nombre;
  int m_edad;

public:
  Persona(string nombre, int edad)
    : m_nombre { nombre }
    , m_edad { edad }
  {
    assert(nombre.size() > 0);
    assert(edad >= 0);
  };

  void setNombre(string n);
  void setEdad(int e);
  string getNombre() const;
  int getEdad() const;
  bool esMayorEdad() const;
};

void Persona::setNombre(string nombre)
{
  assert(nombre.size() > 0);
  m_nombre = nombre;
}

void Persona::setEdad(int edad)
{
  assert(edad >= 0);
  m_edad = edad;
}

string Persona::getNombre() const
{
  return m_nombre;
}

int Persona::getEdad() const
{
  return m_edad;
}

bool Persona::esMayorEdad() const
{
  return m_edad >= 18;
}

int main()
{
  Persona persona { "el-nombre", 10 };
  //

  persona.setNombre("pepe");
  persona.setEdad(20);

  if (persona.esMayorEdad() == true) {
    cout << "Mayor de m_edad" << endl;
  } else {
    cout << "Menor de m_edad" << endl;
  };

  cout << "Los datos ingresados son: ";
  cout << persona.getNombre() << endl;
  cout << persona.getEdad() << endl;
  return 0;
}