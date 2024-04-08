#include <iostream>

char* transformar_a_mayusculas(char* chars)
{
  char* c = chars;
  while (*c != '\0') {
    // convertir a mayusculas
    if (*c >= 97 && *c <= 122)
      *c = *c - 32;
    //    int char_en_decimal = *c;
    //    std::cout << *c << " = " << char_en_decimal << "\n";
    c++;
  }
  return chars;
}

int main()
{
  std::cout << "u2e05" << std::endl;

  char c[] = "abc1deGhI";

  std::cout << c << "\n";
  std::cout << transformar_a_mayusculas(c) << "\n";
}
