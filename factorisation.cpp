#include<bits/stdc++.h>

using namespace std;
//brute force method O(N)
void factorise(int n){
    for(int i=2;i<=n;i++){
        if(n%i==0){
            int count=0;
            while(n%i==0){
                count++;
                n/=i;
            }
            cout << i << "^" << count << ",";
        }
    }
}


//little optimised code is O(sqrt(N))
void factorise_o(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int count=0;
            while(n%i==0){
                count++;
                n/=i;
            }
            cout << i << "^" << count << ",";
        }
    }
    if(n!=1)
        cout << n << "^" << 1 <<endl;
}

int main(){
    int n;
    cout << "Enter a number to see its factorization: ";
    cin >> n;
    factorise(n);
    cout << "\nOptimised factorised is : ";
    factorise_o(n);
    return 0;
}