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
using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    vector<int> sum(16);
    int k = 0;
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    int max = arr[0][0]  + arr[0][1] + arr[0][2] + arr[1][1] + arr[2][0] + arr[2][1] + arr[2][2];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            sum[k] = arr[i][j]  + arr[i][j+1] + arr[i][j+2] + arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            if(max<sum[k]){
                max = sum[k];
             }
             k++;       
        }
    }
    cout<<max;
    return 0;
}
