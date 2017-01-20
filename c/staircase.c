#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int size, startofstair;
  char *string;

  printf("Input the staircase size\n");
  scanf("%d", &size);
  string = (char*)malloc(size);
  for(int i = 0; i < size; i++){
    if(i != 0){
      printf("\n");
    }
    startofstair = size - 1 - i;
    memset(string, 0, size);
    memset(string, ' ', startofstair);
    memset(string + startofstair, '#',i+1);
    string[size] = '\0';
    printf("%s",string);
  }
  free(string);
  return 0;
}
