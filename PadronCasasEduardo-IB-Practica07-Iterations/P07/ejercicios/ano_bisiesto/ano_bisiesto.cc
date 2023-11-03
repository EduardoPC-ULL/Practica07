/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file ano-bisiesto.cc
  * @author Eduardo Padron Casas
  * @date Nov 01 2023
  * @brief El programa indica si el año es bisiesto o no.
  * 
  * @bug There are no known bugs
  * @see https://github.com/IB-2023-2024/P07-iterations/blob/main/iterations.md
  */ 

#include <iostream>

void PrintProgramPurpose() {
  std::cout << "El programa indica por pantalla si el año introduccido es bisiesto o no." << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa ha sido ejecutado con un numero erroneo de parametros" << std::endl << std::endl;
    std::cout << "Este programa deberia llamarse: " << argv[0] << " param1" << std::endl;
    std::cout << "param1: " << " Un numero entero que indica el año" << std::endl;
    return false;
  }
  return true;
}

int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 345;
  }
  int ano = std::atoi(argv[1]);
  if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0)) {
    std::cout << "YES" << std::endl;
  } else {
   std::cout << "NO" << std::endl;
  }
  return 0;
}
