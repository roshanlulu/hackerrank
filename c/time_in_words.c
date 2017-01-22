#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* convertnumtostring(int num){
  char *numword = (char *)malloc(sizeof(char) * 10);
  switch(num){
    case 0: numword = "";
      break;
    case 1: numword = "one ";
      break;
    case 2: numword = "two ";
      break;
    case 3: numword = "three ";
      break;
    case 4: numword = "four ";
      break;
    case 5: numword = "five ";
      break;
    case 6: numword = "six ";
      break;
    case 7: numword = "seven ";
      break;
    case 8: numword = "eight ";
      break;
    case 9: numword = "nine ";
      break;
    case 10: numword = "ten ";
      break;
    case 11: numword = "eleven ";
      break;
    case 12: numword = "twelve ";
      break;
    case 13: numword = "thirteen ";
      break;
    case 14: numword = "fourteen ";
      break;
    case 15: numword = "quarter ";
      break;
    case 16: numword = "sixteen ";
      break;
    case 17: numword = "seventeen ";
      break;
    case 18: numword = "eighteen ";
      break;
    case 19: numword = "nineteen ";
      break;
    case 20: numword = "twenty ";
      break;
    case 21: numword = "twenty one ";
      break;
    case 22: numword = "twenty two ";
      break;
    case 23: numword = "twenty three ";
      break;
    case 24: numword = "twenty four ";
      break;
    case 25: numword = "twenty five ";
      break;
    case 26: numword = "twenty six ";
      break;
    case 27: numword = "twenty seven ";
      break;
    case 28: numword = "twenty eight ";
      break;
    case 29: numword = "twenty nine ";
      break;
    case 30: numword = "half ";
      break;
    default:numword = "default";
      break;
  }
  return numword;
}


int main(){
  int HH, MM;
  char *min = (char *)malloc(sizeof(char) * 10);
  char *zeromin = (char *)malloc(sizeof(char) * 10);
  char *txthour =  (char *)malloc(sizeof(char) * 50);
  char *txtmin =  (char *)malloc(sizeof(char) * 10);
  char *textconnect = (char *)malloc(sizeof(char) * 5);
 
  scanf("%d\n%d", &HH, &MM);
  
  //Get text for Hour
  if(MM <= 30){
    txthour = convertnumtostring(HH);
    txtmin = convertnumtostring(MM);
    textconnect = "past ";
    min = "minutes ";
    if(MM == 0){
      zeromin = "o' clock";
    }
  }
  else{
    txthour = convertnumtostring(HH + 1);
    txtmin = convertnumtostring(60 - MM);
    textconnect = "to ";
    min = "minutes ";
  }

  if(MM == 0 || MM == 15 || MM == 30 || MM == 45){
    if(MM == 0){
      textconnect = "";
    }
    min = "";
  }

  printf("%s%s%s%s", txtmin, min, textconnect, txthour);
  if(MM == 0){
    printf("%s", zeromin);
  }
  
  return 0;
}

