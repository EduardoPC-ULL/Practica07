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
  std::cout << "Este programa devuelve la suma del valor de los dígitos de cualquier número" << std::endl;
  std::cout << "entero positivo. Para ello el usuario deberá ingresar un número de " << std::endl;
  std::cout << "valor positivo." << std::endl;
  std::cout << "" << std::endl << std::endl;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
  if (argc != kCorrectNumber) {
    std::cout << "Este programa funciona con números positivos y sin decimales." << std::endl << std::endl;
    std::cout << "Este programa se debe llamar" << argv[0] << " param1" << std::endl;
    std::cout << "param1: " << "Un número entero positivo y sin decimales." << std::endl;
    std::cout << "" << std::endl;
    return false;
  }
  return true;
}

unsigned long long suma_digitos(unsigned long long numero) {
  unsigned long long suma = 0;

  while(numero > 0) {
    suma += numero % 10;
    numero /= 10;
    }
  return suma;
}
int main(int argc, char* argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 345;
  }
  unsigned long long suma = suma_digitos(std::atoi(argv[1]));
  std::cout << "La suma de los dígitos de ese número es: " << suma << std::endl;
  return 0;
}
