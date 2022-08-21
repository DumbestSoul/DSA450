#include<iostream>
#define int long long int

using namespace std;

int frog_bu(int n, int k, int *h){
    int dp[n];
    dp[0] = 0;
    dp[1] = dp[0] + abs(h[1] - h[0]);

    for(int i=2;i<n;i++){
        dp[i] = INT_MAX;
        for(int j=1;j<=k;j++){
            dp[i] = min(dp[i], dp[i-j]+abs(h[i]-h[i-j]));
        }
    }
    return dp[n-1];
}

int32_t main(){
    int n, k;
    cin >> n >> k;
    int h[n];
    for(int i=0;i<n;i++){
        cin >> h[i];
    }
    cout << "Minimum cost incurred is " << frog_bu(n, k, h);
    return 0;
}