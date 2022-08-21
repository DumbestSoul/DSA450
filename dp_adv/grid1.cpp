#include<bits/stdc++.h>

#define int long long int


using namespace std;

int32_t main(){

    int n, m, mod=1e9 + 7;
    cin >> n >> m;
    string s[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
    }

    int dp[n][m];


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 and j==0) dp[i][j]=1;
            else if(i==0) dp[i][j] = dp[i][j-1];
            else if(j==0) dp[i][j] = dp[i-1][j];
            else{
                dp[i][j] = dp[i-1][j]+dp[i][j-1];
            }
            if(s[i][j]=='#') dp[i][j] = 0;
            dp[i][j] %= mod;
        }
    }

    cout << dp[n-1][m-1]<< endl;
    return 0;
}