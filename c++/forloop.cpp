#include <iostream>
#include <cstdio>
#include <string>

using namespace::std;

string displayDigit (int number);
string displayDigit (int number) 
{
  string output;

  if(number == 1){ output = "one"; }
  else if(number == 2){ output = "two"; }
  else if(number == 3){ output = "three"; }
  else if(number == 4){ output = "four"; }
  else if(number == 5){ output = "five"; }
  else if(number == 6){ output = "six"; }
  else if(number == 7){ output = "seven"; }
  else if(number == 8){ output = "eight"; }
  else if(number == 9){ output = "nine"; }
  
  return output;
}

string  displayEvenOdd (int number);
string  displayEvenOdd (int number)
{
  string output;

  if (number % 2 == 0) { output = "even"; }
  else {output = "odd"; }

  return output;
}

int main() {

  int a, b ,count;
  string output;
  
  printf(" Enter two integers a and b [a < b] : ");
  scanf("%d %d", &a, &b);
  for(count = a; count <= b; count++){
      if( count <= 9)
      { 
        output = displayDigit(count); 
      }
      else { 
        output = displayEvenOdd(count);
      }
      printf("%s\n", output.c_str());
  }
  return 0;
}


