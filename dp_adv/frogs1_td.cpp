#include<bits/stdc++.h>
#define int long long int

const int N = 1e5;

int h[N], memo[N];

int dp(int n){
    if(n==0) return 0;
    int ans = dp(n-1) + abs(h[n-1]-h[n]);
    if(n-2>=0) ans = min(ans, dp(n-2) + abs(h[n-2] - h[n]));
    return ans;
}

using namespace std;

int32_t main(){

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> h[i];
    }
    memset(memo, -1, sizeof(memo));
    return 0;
}