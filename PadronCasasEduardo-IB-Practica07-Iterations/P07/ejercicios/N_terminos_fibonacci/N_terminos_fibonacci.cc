/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Eduardo Padrón Casas
 * @date Nov 01 2022
 * @brief Check the correct number of parameters for a program
 *
 */

#include <iostream>
#include <string>

void PrintProgramPurpose() {
  std::cout << "Este programa muestra los N primeros números de la" << std::endl;
  std::cout << "serie de Fibonacci" << std::endl;
  std::cout << "" << std::endl;
  std::cout << "" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Hay un problema en la ejecución del programa." << std::endl << std::endl;
    std::cout << "Este programa se debe llamar:" << argv[0] << "" << std::endl;
    std::cout << "param1: " << "Se debe ingresar un número entero positivo." << std::endl;
    std::cout << "" << "" << std::endl;
    return false;
  }
  return true;
}

unsigned long long ImprimirFibonacci(int N) {
  if (N <= 0) {
    std::cout << "N debe ser un número entero positivo." << std::endl;
    return 0;
  }

  int primero = 0;
  int segundo = 1;

  std::cout << "Los primeros " << N << " términos de la Serie de Fibonacci son: ";

  for (int i = 0; i < N; i++) {
    std::cout << primero << " ";

    int siguiente = primero + segundo;
    primero = segundo;
    segundo = siguiente;
  }

  std::cout << std::endl;
}


int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 345;
  }
  unsigned long long serie = ImprimirFibonacci(std::atoi(argv[1]));
  return 0;
}
