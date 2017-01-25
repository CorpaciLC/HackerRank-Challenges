#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    long num;
    string name;
    map<string, long> myMap;
    cin>>n;
    
    for(int i=0; i<n; i++){
        cin>>name;
        cin>>num;
        myMap[name] = num;
    }
    while(cin>>name){
       if( myMap.find(name) != myMap.end()){
           cout<<name<<"="<<myMap.find(name)->second<<endl;
       }
       else{
           cout<<"Not found"<<endl;
       }
    }
    
    return 0;
}
