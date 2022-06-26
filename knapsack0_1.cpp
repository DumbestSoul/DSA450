#include<iostream>
#include<algorithm>

using namespace std;

void knapSack(int W, int wt[], int val[], int n){
    int dp[n+1][W+1];
    for(int i=0;i<W+1;i++){
        dp[0][i] = 0;
    }
    for(int i=0;i<n+1;i++){
        dp[i][0] = 0;
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<W+1;j++){
            if(wt[i-1] <= j){
                dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]], dp[i-1][j]);
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    for(int i=0;i<n+1;i++){
        for(int j=0;j<W+1;j++){
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << dp[n][W];
}
int main(){
    int wt[] = {4,5,6};
    int val[] = {1,2,3};
    int W = 10;
    knapSack(3, wt, val, 3);
    return 0;
}