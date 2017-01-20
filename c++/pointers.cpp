#include <iostream>
#include <cstdio>

using namespace::std;


void update( int *a, int *b){
  int sum = *a + *b;
  *b = (*b > *a)?(*b - *a):(*a - *b);
  *a = sum;
}

int main(){

  int a, b;
  int *pa = &a, *pb = &b;

  scanf("%d %d",&a, &b);
  update(pa, pb);
  printf("Sum: %d \n Absolute Difference: %d \n ", a);
  return 0;
}