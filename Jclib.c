#include <stdio.h> 
#include "Jclib.h"

//Function to print an array
void array_print(int array[], int array_counter){

  printf("[");
  for (int i = 0; i < array_counter; i++){
      printf("%d,",array[i]);
  }
  printf("]\n");


}

