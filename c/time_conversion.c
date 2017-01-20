#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

  char format[3];
  int hh, mm, ss;

  scanf("%d %d %d", &hh, &mm, &ss);
  scanf("%s", format);
  hh = (hh != 12) ? (strcmp(format, "AM") == 0 ? hh : hh + 12) : (strcmp(format, "AM") == 0 ? 0 : hh);
  printf("%02d:%02d:%02d", hh, mm, ss);
  return 0;
}