#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


void calculate_bribe(int *q, int qcount){

  int bribe_cnt = 0, max;
  bool found_chaotic = false;

  for (int j = qcount - 1; j >= 0; j--){
    // Calculate if chaotic queue found and break if necessary
    if(q[j] - (j + 1) > 2){
      found_chaotic = true;
      break;
    }
    max = 0;
    if(q[j] - 2 > max){ max = q[j] - 2;}
    for(int i = max; i < j; i++){
      bribe_cnt = (q[i] > q[j]) ? bribe_cnt + 1 : bribe_cnt;
    }
  }
  if(found_chaotic){
    printf("%s\n", "Too chaotic");
  }
  else{
    printf("%d\n", bribe_cnt);
  }
}

int main(){
  int n, T;
  int* q;
  
  scanf("%d", &T);
  for(int i = 0; i < T; i++){
    // Input t-th test case
    scanf("%d", &n);
    // Allocate memory for the final q 
    q = (int *)malloc((sizeof(int) * n));
    // Get q entries 
    for (int j = 0; j < n; j++){
      scanf("%d", (q + j));
    }
    calculate_bribe(q, n);
    free(q);
  }
  return 0;
}
