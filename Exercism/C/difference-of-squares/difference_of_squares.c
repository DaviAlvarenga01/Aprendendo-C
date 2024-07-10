#include "difference_of_squares.h"
#include <stdio.h>
#include <stdlib.h>

int numeros(int number){

int* naturalNumbers = malloc(number * sizeof(int));

for(int i = 0; i < number; i++){
naturalNumbers[i] = i + 1;
printf("naturalNumbers[%d] = %d\n", i, naturalNumbers[i]);
}

return 1; 

}

int main(){
    numeros(10);
}
