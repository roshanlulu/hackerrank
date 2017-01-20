#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a[3], b[3], result[2] = {0, 0}; 
    int *pa, *pb, *presult;
    pa = a;
    pb = b;
    presult = result;
    for(int i = 0; i < 3; i++){
        scanf("%d ", pa+i);
    }
    for(int i = 0; i < 3; i++){
        scanf("%d ", pb+i);
    }
    
    for(int i = 0; i < 3; i++){
        if(*(pa + i) > *(pb + i)){ 
            (*presult)++;
        }
        else if(*(pa + i) < *(pb + i)){ 
            *(presult+1) = *(presult+1) + 1;
        }
        else { /* Do nothing */}
    }
    printf("%d %d", result[0], result[1]);
    return 0;
}
