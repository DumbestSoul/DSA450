#include<bits/stdc++.h>

using namespace std;


int main(){
    string s, t;
    cin >> s >> t;
    int m = s.size();
    int n = t.size();

    int dp[m+1][n+1];


    //initialisation of the dp table
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j==0)
                dp[i][j]=0;
        }
    }

    //dp
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s[i-1]==t[j-1]) dp[i][j] = 1+dp[i-1][j-1];
            else{
                dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }
    }

    cout << "The length of the lcs is " << dp[m][n]<< endl;
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}