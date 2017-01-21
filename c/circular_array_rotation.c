#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// int* rightrotate_array(int* array, int arraysize){

//   int temp;

//   temp = *(array + arraysize - 1);
//   // Forward shift all elements except last element (copy it to first element)
//   for(int i = 0; i < arraysize; i++){
//     int shift_element = arraysize - 1 - i;

//     if(shift_element < (arraysize - 1)){
//       *(array + shift_element + 1) = *(array + shift_element);
//     }
//     else{
//       temp = *(array + arraysize - 1);
//     }
//   }
//   *(array) = temp;
//   return array;
// }
int main(){

  int n, k, q, accessthisvalue;
  int *array, *query;

  scanf("%d %d %d", &n, &k, &q);
  array = (int *)malloc(sizeof(int) * n);
  query = (int *)malloc(sizeof(int) * q);
  k = k % n;
  // Input array elements
  for(int i = 0; i < n; i++){
    scanf("%d", array + i);
  }
  // Rotate array k times 
  // while(k){
  //   array = rightrotate_array(array, n);
  //   k--;
  // }

  // Input query elements
  for(int i = 0; i < q; i++){
    scanf("%d", query + i);
  }

  // Print query result
  for(int i = 0; i < q; i++){
    accessthisvalue = ((query[i] - k) < 0) ? (n + (query[i] - k)) : (query[i] - k);
    printf("%d\n", *(array + accessthisvalue));
  }
  return 0;
}