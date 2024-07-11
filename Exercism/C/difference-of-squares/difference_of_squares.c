#include "difference_of_squares.h"
#include <stdio.h>

int* generateNaturalNumbers(int number) {   // Função que gera valores naturais em ordem crescente
  int* naturalNumbers = malloc(number * sizeof(int));
  for (int i = 0; i < number; i++) {    // Loop para colocar os números de ordem crescente em um array
    naturalNumbers[i] = i + 1;
  }
  return naturalNumbers;
}

int sumArray(int *arr, int size) {   // Define a função sumArray que recebe um ponteiro para um array de inteiros (arr).
  int sum = 0;
  for (int i = 0; i < size; i++) { // Avança o ponteiro para o próximo elemento
    sum += arr[i];
  }
  return sum;
}

int square_of_sum(unsigned int number) {
  int* naturalNumbers = generateNaturalNumbers(number);
  int sum = sumArray(naturalNumbers, number);
  float square_of_sum = (float)sum * (float)sum; // Converta sum para float antes de calcular o quadrado
  free(naturalNumbers);
  return square_of_sum;
}






  