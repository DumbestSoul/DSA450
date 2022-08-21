#include<iostream>
#define int long long int

using namespace std;

int frog_bu(int n, int *h){
    int dp[n];
    dp[0] = 0;
    dp[1] = dp[0] + abs(h[1] - h[0]);

    for(int i=2;i<n;i++){
        dp[i] = min(dp[i-1]+abs(h[i-1] - h[i]), dp[i-2]+abs(h[i-2]-h[i]));
    }
    return dp[n-1];
}

int32_t main(){
    int n;
    cin >> n;
    int h[n];
    for(int i=0;i<n;i++){
        cin >> h[i];
    }
    cout << "Minimum cost incurred is " << frog_bu(n, h);
    return 0;
}