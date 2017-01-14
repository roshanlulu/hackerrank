#include <cmath>
#include <iostream>

using namespace::std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
  int num1, num2, num3, sum;
  cout << "Input 3 numbers : " << endl;
  cin >> num1 >> num2 >> num3;
  sum = num1 + num2 + num3;
  cout << num1 << " + " << num2 << " + " << num3 << " = " << sum << endl;
  return 0;
}