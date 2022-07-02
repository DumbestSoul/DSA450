#include<bits/stdc++.h>
#define N 1000000
using namespace std;

void primeSieve(vector<int> &sieve){
    //Mark 1 and 0 as not prime
    sieve[1]=sieve[0] = 0;
    //start from 2 and mark ith number as not prime
    for(long long i=2;i<=N;i++){
        if(sieve[i]){
            for(long long j=i*i;j<=N;j=j+i){
                sieve[j]=0;
            }
        }
    }
}

int main(){

    vector<int> sieve(N, 1);
    primeSieve(sieve);

    for(int i=0;i<=100;i++){
        if(sieve[i])
            cout << i << " ";
    }
    cout << endl;
    return 0;
}