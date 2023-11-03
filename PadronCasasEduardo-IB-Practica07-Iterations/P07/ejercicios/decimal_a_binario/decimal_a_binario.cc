/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file decimal-a-binario.cc
  * @author Eduardo Padron Casas
  * @date Nov 01 2023
  * 
  * @bug There are no known bugs
  * @see https://github.com/IB-2023-2024/P07-iterations/blob/main/iterations.md
  */ 

#include <iostream>

void PrintProgramPurpose() {
  std::cout << "Este programa devuelve un numero binario de un numero decimal." << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa ha sido ejecutado con un numero erroneo de parametros" << std::endl << std::endl;
    std::cout << "Este programa deberia llamarse: " << argv[0] << " param1." << std::endl;
    std::cout << "param1: " << " Un numero entero decimal." << std::endl;
    return false;
  }
  return true;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 345;
  }
  long long int numero = std::atoi(argv[1]);
  std::string binario = "";
  if (numero == 0) {
    binario = "0";
  }
  
  while (numero > 0) {
    if (numero % 2 == 0) {
      binario = "0" + binario;
    } else {
      binario = "1" + binario;
    }
      numero /= 2;
  }
  std::cout << "El numero en binario es: " << binario << std::endl;
  return 0;
}
