#include<bits/stdc++.h>
#define int long long int 
using namespace std;

const int mod = 1e9 + 7;

int powr(int a, int b){
    int res = 1;
    while(b){
        if(b&1){
            res *= a, res%=mod;
        }
        a *= a;
        a%=mod;
        b /= 2;
   }
   return res;
}

int32_t main(){
    // int a, b;
    // cin >> a >> b;
    cout << powr(3, 4);
    return 0;
}