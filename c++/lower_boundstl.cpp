#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size, q;
    
    cin >> size;
    vector<int> vec(size);
    for(int i = 0; i < size; i++){
        cin >> vec[i];
    }
    cin >> q;
    vector<int> qvec(q);
    for(int i = 0; i < q; i++){
        cin >> qvec[i]; 
    }
    
    std::vector<int>::iterator low;
    for(int i = 0; i < q; i++){
        low = lower_bound(vec.begin(), vec.end(), qvec[i]);
        if(qvec[i] == vec[low - vec.begin()]){
            cout << "Yes ";
        }
        else{
            cout << "No ";
        }
        cout << (low - vec.begin() + 1) << endl;
    }
    return 0;
}
