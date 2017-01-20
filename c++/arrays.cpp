#include <iostream>
#include <cstdio>

using namespace::std;

int main(){
  int arraysize, count;

  scanf("%d", &arraysize);
  int array[arraysize];
  
  for(count = 0; count < arraysize; count++)
  {
    scanf("%d",array + count);
  }
  for(count = arraysize; count > 0; count--)
  {
    printf("%d\n",array[count-1]);
  }
  return 0;
}