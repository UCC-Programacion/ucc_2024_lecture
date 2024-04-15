#include <iostream>

float** crear_matriz(int filas, int columnas)
{
  float** matriz = new float*[filas];
  for (int i = 0; i < filas; ++i) {
    matriz[i] = new float[columnas] {};
  }
  return matriz;
}

int main()
{
  std::cout << "u2e12" << std::endl;

  const int columnas = 3;
  const int filas = 2;
  float** matriz = crear_matriz(filas, columnas);

  int n = 0;
  for (int i = 0; i < filas; ++i) {
    for (int j = 0; j < columnas; ++j) {
      matriz[i][j] = n++;
      // std::cin >> matriz[i][j];
    }
  }

  for (int i = 0; i < filas; ++i) {
    for (int j = 0; j < columnas; ++j) {
      std::cout << matriz[i][j] << " ";
    }
    std::cout << "\n";
  }

  for (int i = 0; i < filas; ++i) {
    delete[] matriz[i];
  }

  delete[] matriz;
}
