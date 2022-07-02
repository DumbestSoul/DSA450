#include<iostream>
using namespace std;

int power(int a, int n){
    if(n==0)
        return 1;
    return a*power(a, n-1);
}

int fastpower(int a, int n){
    if(n==0)
        return 1;
    int subProb = fastpower(a, n/2);
    int subProbSq = subProb*subProb;
    if(n&1){
        return a*subProbSq;
    }
    else
        return subProbSq;
}

int main(){
    int a, n;
    cin >> a >> n;
    cout << fastpower(a, n);
    return 0;
}