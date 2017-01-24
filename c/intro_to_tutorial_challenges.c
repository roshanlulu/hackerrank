#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <stdbool.h>

int main(){

  int search_val, array_size;
  int *array;

  /* Get inputs */
  scanf("%d", &search_val);
  scanf("%d", &array_size);
  array = (int *)malloc(sizeof(int *) * array_size);
  for(int ip_loop = 0; ip_loop < array_size; ip_loop++){
    scanf("%d", (array + ip_loop));
    /* Search for search_val in array */
    if(*(array + ip_loop) == search_val){
      printf("%d", ip_loop);
    }
  }
  return 0;
}