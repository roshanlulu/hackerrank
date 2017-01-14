#include <iostream>
#include <cstdio>
using namespace std;

int max_of_two(int a, int b)
{
   if(a >= b)
    { return a; }
   else 
    { return b; }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_two(max_of_two(a, b), max_of_two(c, d));
    printf("%d\n", ans);
    
    return 0;
}