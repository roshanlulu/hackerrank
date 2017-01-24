#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void insertion_sort(int array_size, int * array){

  int sortnum;

  for (int loopcnt = 1; loopcnt < array_size; loopcnt++){
    sortnum = array[loopcnt];
    int subarraysize = loopcnt;
    while((subarraysize > 0) && (array[subarraysize - 1] > sortnum)){
      array[subarraysize] =  array[subarraysize - 1];
      subarraysize--;
    }
    array[subarraysize] = sortnum;
    for(int innerloopcnt = 0; innerloopcnt < array_size; innerloopcnt++){
      printf("%d ", array[innerloopcnt]);
    }
    printf("\n");
  }
}

int main(){

  int array_size;
  int * array;

  /* Get input */
  scanf("%d", &array_size);
  array = (int *)malloc(sizeof(int) * array_size);
  for(int loop = 0; loop < array_size; loop++){
    scanf("%d", (array + loop));
  }
  insertion_sort(array_size, array);
  return 0;
}