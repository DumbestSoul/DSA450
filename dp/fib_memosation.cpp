#include<iostream>

using namespace std;

int fib(int n, int dp[]){
    if(n==0 or n==1){
        return n; 
    }
    if(dp[n]!=0){
        return dp[n];
    }
    else{
        return dp[n] = fib(n-1, dp) + fib(n-2, dp);
    }
}

int main(){
    int n;
    cin >> n;
    int dp[n+1] = {0};
    cout << fib(n, dp);
    return 0;
}