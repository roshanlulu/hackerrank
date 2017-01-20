#include <iostream>

using namespace::std;

int main() {

  char SubjectLine[4] = {0};
  SubjectLine[0] = 70;
  SubjectLine[1] = 0x50;
  SubjectLine[2] = 144%73;
  SubjectLine[3] = '\0';

  cout << SubjectLine << endl;
}





