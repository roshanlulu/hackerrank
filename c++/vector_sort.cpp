#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    
    cin >> n;
    vector<int> input(n);
    for(int i = 0; i  < n; i++){
        cin >> input[i];
    }
    sort(input.begin(), input.end());
    for(int i = 0; i  < n; i++){
        cout << input[i] << " ";
    }
    return 0;
}
