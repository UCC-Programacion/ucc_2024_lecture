#include <iostream>

namespace menu {
// copied from
// https://www.learncpp.com/cpp-tutorial/stdcin-and-handling-invalid-input/

void ignore_line()
{
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int get_int(std::string label, std::string error_label = "Ingreso un dato no valido. Intente de nuevo.\n")
{
  while (true) // Loop until user enters a valid input
  {
    std::cout << label;
    int x {};
    std::cin >> x;

    // Check for failed extraction
    if (!std::cin) // has a previous extraction failed?
    {
      // yep, so let's handle the failure
      std::cin.clear(); // put us back in 'normal' operation mode
      ignore_line(); // and remove the bad input
      std::cout << error_label;
    } else {
      ignore_line(); // remove any extraneous input
      return x;
    }
  }
}

}