#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> st;
    int q;
    int qtype, qval;
    
    cin >>q;
    for(int i = 0; i < q; i++){
        cin >> qtype;
        cin >> qval;
        switch(qtype){
            case 1:
                st.insert(qval);
                break;
            case 2:
                st.erase(qval);
                break;
            case 3:
            {
                std::set<int>::iterator itr = st.find(qval);
                if(itr != st.end()){
                    cout << "Yes" << endl;
                }
                else{
                    cout << "No" << endl;
                }
            }
                break;
            default:
                break;
        }
    }
    return 0;
}
