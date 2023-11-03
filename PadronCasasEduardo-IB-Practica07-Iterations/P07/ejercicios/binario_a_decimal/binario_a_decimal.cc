/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file binario-decimal.cc
  * @author Eduardo Padron Casas
  * @date Nov 01 2023
  * @brief El programa devuelve un numero en formato decimal de uno introduccido
  *        en binario.
  * 
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */ 

#include <iostream>
#include <cmath>

void PrintProgramPurpose() {
  std::cout << "Este programa convierte un numero binario a decimal." << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa ha sido ejecutado con un numero erroneo de parametros" << std::endl << std::endl;
    std::cout << "Este programa deberia llamarse: " << argv[0] << " param1" << std::endl;
    std::cout << "param1: " << " Un numero entero." << std::endl;
    return false;
  }
  return true;
}

int convert(unsigned long int binario) {
  int decimal{0}, i{0}, resto{0};
  while (binario != 0) {
    resto = binario % 10;
    binario /= 10;
    if (resto != 0 && resto != 1) {
      return 0;
    }
    decimal += resto * std::pow(2, i);
    ++i;
  }
  return decimal;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 345;
  }
  unsigned long int binario = std::atoi(argv[1]);
  if (convert(binario) == 0) {
    std::cout << "Wrong Input" << std::endl;
  }
  std::cout << "El numero " << binario << " en decimal es el numero: " << convert(binario) << std::endl;
  return 0;
}
