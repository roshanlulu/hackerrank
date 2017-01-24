#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>



void sort_element(int array_size, int * array){
  int sortnum = array[array_size - 1];
  bool arrayissorted = false;

  for(int innerloopcnt = array_size - 1; innerloopcnt >= 0 && !arrayissorted; innerloopcnt--){
    if(array[innerloopcnt - 1] > sortnum){
      array[innerloopcnt] = array[innerloopcnt - 1];
    }
    else if((array[innerloopcnt - 1] <= sortnum) || (innerloopcnt == 0)){
      array[innerloopcnt] = sortnum;
      arrayissorted = true;
    }
  }
}

void insertion_sort(int array_size, int * array){

  bool arrayissorted = false;

  for (int loopcnt = 1; loopcnt < array_size; loopcnt++){
    sort_element(loopcnt + 1, array);
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