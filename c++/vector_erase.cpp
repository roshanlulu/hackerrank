#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int sizeofvec;
    int x, a, b;
    
    //Get input from stdout
    cin >> sizeofvec;
    vector<int> vec(sizeofvec);
    for(int i = 0; i < sizeofvec; i++){
        cin >> vec[i];
    }
    cin >> x;
    cin >> a >> b;
    //Perform vector erase operation
    //Erase element x in the array
    vec.erase(vec.begin() + x - 1);
    //Erase elements in the range a ... b(exclude b)
    vec.erase(vec.begin() + a - 1, vec.begin() + b - 1);
    //Print output
    cout << vec.size() << endl;
    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    return 0;
}
