/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2023-2024
* @file integer_division_and_reminder.cc
* @author Eduardo Padron Casas
* @date Nov 03 2023
* El programa devuelve el resultado de la potencia de un número.
* @bug There are no known bugs
* @see https://jutge.org/problems/P48107
*/


#include <iostream>
#include <iomanip>

int main() {
  float base;
  float potencia {1};
  int exponente;
  std::cout << "Este programa hace la potencia de cualquier numero de base"
            << "racional y de exponente entero positivo" << std::endl;
  std::cin >> base >> exponente;

    for (int i = 1; i <= exponente; i++){
      potencia *= base; 
    }
    std::cout << potencia << std::endl;
  return 0;
}
