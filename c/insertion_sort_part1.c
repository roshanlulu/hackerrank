#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


void insertion_sort(int array_size, int * array){
  bool arrayissorted = false;
  int sortnum = *(array + array_size - 1);

  for(int loopcnt = array_size - 1; loopcnt >= 0 && !arrayissorted ; loopcnt--){
    if(*(array - 1 + loopcnt) > sortnum){
      /* Shift the last num and print array */
      *(array + loopcnt) = *(array - 1 + loopcnt);
    }
    else if((*(array - 1 + loopcnt) <= sortnum) || (loopcnt == 0)){
      *(array + loopcnt) = sortnum;
      arrayissorted = true;
    }
    for(int innerloopcnt = 0; innerloopcnt < array_size; innerloopcnt++){
      printf("%d ", *(array + innerloopcnt));
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