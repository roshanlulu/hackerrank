#include <iostream>

using namespace::std;

int main() {
  int d;
  long l;
  long long lld;
  char c;
  float f;
  double lf;
  scanf("%d %ld %lld %c %f %lf", &d, &l, &lld, &c, &f, &lf);
  printf("%d\n%ld\n%lld\n%c\n%f\n%lf\n", d, l, lld, c, f, lf);
}