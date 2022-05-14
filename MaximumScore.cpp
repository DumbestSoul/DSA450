#include<bits/stdc++.h>

using namespace std;

int returnDec(int bin){
    int temp = bin;
    int ans = 0;
    int p = 0;
    while(temp!=0){
        int c = temp % 10;
        ans = ans + c*(pow(2, p));
        p++;
        temp = temp / 10;
    }
    return ans;
}

int binary(int num){
    int temp = num;
    int ans = 0, p = 1;
    while(num!=0){
        int lastbit = (num&1);
        ans += p*lastbit;
        p=p*10;
        temp>>1;
    }
    return ans;
}


int main(){
    int check = 101010101;
    // cout << "The equivalent decimal number is..." << returnDec(check) << endl;
    cout << "The equivalent binary number is..." << binary(34) << endl;
    return 0;
}