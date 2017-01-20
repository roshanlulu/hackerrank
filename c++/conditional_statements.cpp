#include <iostream>
#include <string>

using namespace::std;

int main() {
  int input;
  string output = "";

  printf("Enter a positive integer: ");
  scanf("%d", &input);
  if(input == 1){ output = "one"; }
  else if(input == 2){ output = "two"; }
  else if(input == 3){ output = "three"; }
  else if(input == 4){ output = "four"; }
  else if(input == 5){ output = "five"; }
  else if(input == 6){ output = "six"; }
  else if(input == 7){ output = "seven"; }
  else if(input == 8){ output = "eight"; }
  else if(input == 9){ output = "nine"; }
  else { output = "Greater than 9"; }

  printf("%s\n", output.c_str());
}