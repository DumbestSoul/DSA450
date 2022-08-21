#include<iostream>
#include<vector>


using namespace std;

int countWays(int n, int k){
    //iterative approach
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<=k;j++){
            if(i-j>=0){
                dp[i] += dp[i-j];
            }
        }
    }
    return dp[n];
}

//bottom up approach - optimised O(n+k) time complexity
int countWaysOpt(int n, int k){
    //iterative approach
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2;i<=k;i++){
        dp[i] = 2*dp[i-1];
    }

    for(int i=k+1;i<=n;i++){
        dp[i] = 2*dp[i-1] - dp[i-k-1];
    }

    return dp[n];
}


int main(){
    int n, k;
    cin >> n >> k;
    cout << "UnOptimised version : " << countWays(n, k) << endl;
    cout << "Optimised version : " << countWaysOpt(n, k) << endl;

    return 0;
}