#include<iostream>

using namespace std;

int fib(int n){
    int dp[n+1] = {0};
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<n+1;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main(){
    int n;
    cout << "Enter the number you want to find factorial of : ";
    cin >> n;
    cout << "The fibonacci of the number is : " << fib(n);
    return 0;
}