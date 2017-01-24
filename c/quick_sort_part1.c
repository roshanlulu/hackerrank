#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


void print_array(int array_size, int * array){
  for(int loopcnt = 0; loopcnt < array_size; loopcnt++){
    printf("%d ", array[loopcnt]);
  }
}

void quick_sort(int array_size, int * array){
  int left[array_size], equal[array_size], right[array_size];
  int pivot = array[0];
  int pleft = 0, pright = 0, pequal = 0;

  for(int loopcnt = 0; loopcnt < array_size; loopcnt++){
    if (pivot == array[loopcnt]){
      *(equal + pequal) = array[loopcnt];
      (pequal)++;
    }
    else if(pivot < array[loopcnt]){
      *(right + pright) = array[loopcnt];
      (pright)++;
    }
    else{
      *(left + pleft) = array[loopcnt];
      (pleft)++;
    }
  }
  print_array(pleft, left);
  print_array(pequal, equal);
  print_array(pright, right);
}

int main(){

  int array_size;

  scanf("%d", &array_size);
  int array[array_size];
  for(int loopcnt = 0; loopcnt < array_size; loopcnt++){
    scanf("%d", &array[loopcnt]);
  }
  quick_sort(array_size, array);
  return 0;
}