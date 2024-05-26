#include "menu.h"

int main()
{
  // https://hackingcpp.com/cpp/lang/exceptions.html

  // while (true) {
  //   std::cout << "ingrese numerador: ";
  //   int numerador;
  //   std ::cin >> numerador;

  //   std::cout << "ingrese denomindaor: ";
  //   int denominador;
  //   std ::cin >> denominador;

  //   try {
  //     throw std::runtime_error("runtime error >>>>>");
  //     Racional racional { numerador, denominador };

  //     std::cout << racional << "\n";
  //     break;
  //   } catch (std::logic_error const& e) {
  //     std::cout << "error de logica: " << e.what() << "\n";
  //     continue;
  //   } catch (std::exception const& e) {
  //     std::cout << "error: " << e.what() << "\n";
  //     throw;
  //   } catch (...) {
  //     std::cout << "ocurrio un error\n";
  //     throw;
  //   }
  // }
  menu::mostrar();
}
