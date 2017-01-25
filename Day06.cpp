#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string str;
    int numberOfStr;
    
    cin>>numberOfStr;
    for(int i=0; i<numberOfStr; i++){
        cin>>str;
        for(int j=0; j<str.size(); j+=2){
            cout << str[j];
        }
        cout<<" ";
        for(int j=1; j<str.size(); j+=2){
            cout << str[j];
        }
        cout<<endl;
    }
    
    return 0;
}
