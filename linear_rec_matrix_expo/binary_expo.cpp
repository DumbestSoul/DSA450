#include<bits/stdc++.h>

using namespace std;

int powr(int a, int b){
    int res = 1;
    while(b){
        if(b&1){
            res *= a;
        }
        a *= a;
        b /= 2;
   }
   return res;
}

int main(){
    // int a, b;
    // cin >> a >> b;
    cout << powr(2, 10);
    return 0;
}