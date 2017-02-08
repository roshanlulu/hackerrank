#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    int qtype;
    map<string, int> dict;
    string name;
    int marks;
    
    cin >> q;
    for(int i = 0; i < q; i++){
        cin >> qtype;
        switch(qtype){
            case 1:
            {
                cin >> name >> marks;
                std::map<string, int>::iterator itr = dict.find(name);
                if(itr == dict.end()){
                    dict.insert(make_pair(name, marks));
                }
                else{
                    itr->second += marks;
                }
            }
                break;
            case 2:
                cin >> name;
                dict.erase(name);
                break;
            case 3:
                {
                    cin >> name;
                    std::map<string,int>::iterator itr;
                    //Get the iterator pointing to the name
                    itr = dict.find(name);
                    if(itr != dict.end()){
                        cout << itr->second << endl;
                    }
                    else{
                        cout << 0 << endl;
                    }
                }
                break;
        }
    }
    return 0;
}
