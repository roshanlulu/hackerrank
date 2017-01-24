#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void insertion_sort(int array_size, int * array){

  int sortnum;
  int shiftcount = 0;

  for (int loopcnt = 1; loopcnt < array_size; loopcnt++){
    sortnum = array[loopcnt];
    int subarraysize = loopcnt;
    while((subarraysize > 0) && (array[subarraysize - 1] > sortnum)){
      array[subarraysize] =  array[subarraysize - 1];
      subarraysize--;
      shiftcount++;
    }
    array[subarraysize] = sortnum;
  }
  printf("%d ", shiftcount);
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