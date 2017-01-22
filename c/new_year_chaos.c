#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define found_chaotic UINT16_MAX

int main(){
  int n, T, total_bribe_cnt = 0, crnt_bribe_cnt = 0;
  int* q;
  int *answer;
  
  scanf("%d", &T);
  answer = (int *)malloc(sizeof(int) * T);
  for(int tcentry; tcentry < T; tcentry++){
    // Input t-th test case
    scanf("%d", &n);
    // Allocate memory for the final q 
    q = (int *)malloc((sizeof(int) * n));
    // Get q entries 
    for (int qentry = 0; qentry < n; qentry++){
      scanf("%d", (q + qentry));
      crnt_bribe_cnt = ((q[qentry]) - (qentry + 1) < 0) ? 0 : (q[qentry]) - (qentry + 1);
      total_bribe_cnt = ((total_bribe_cnt == found_chaotic) || (crnt_bribe_cnt > 2))? 
                        found_chaotic : (total_bribe_cnt + crnt_bribe_cnt);
    }
    answer[tcentry] = total_bribe_cnt;
  }
  // Display answer
  for(int tcentry; tcentry < T; tcentry++){
    if(*(answer + tcentry) == found_chaotic){
      printf("%s\n", "Too chaotic");
    }
    else{
      printf("%d\n", *(answer + tcentry));
    }
  }
  return 0;
}
