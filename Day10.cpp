#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    int rest;
    vector<int> vec;
    int i=0;
    while(n>0){
        vec.push_back(n % 2);
        n = n/2;
        i++; 
    }
    int max = 0, MAX = 0;
    
    for(int j=0; j<i; j++){
        if(vec[j] == 1){
            max++;
        }
        else{
            max = 0;
        }
       if(max>MAX){
            MAX = max;
        }
    }
    cout<<MAX;
    return 0;
}
