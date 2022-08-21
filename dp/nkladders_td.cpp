#include<iostream>

using namespace std;

int nkladders(int n, int k){
    if(n==0)
        return 1;
    if(n<0)
        return 0;

    int ans = 0;
    for(int i=1;i<=k;i++){
        ans += nkladders(n-i, k);
    }
    return ans;
}

int main(){
    int n, k;
    cout << "Enter the number of ladders : ";
    cin >> n;
    cout << "Enter the number of maximum steps that could be taken at a time : ";
    cin >> k;
    cout << "The maximum number of ways is  : " << nkladders(n, k) << endl;
    return 0;
}