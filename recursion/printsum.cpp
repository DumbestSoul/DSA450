#include<iostream>
using namespace std;

int printSum(int n){
   if(n==1)
        return 1;
    return n + printSum(n-1);
}

int main(){
    cout << "The sum from 1 to 4 is given by " << printSum(4);
    return 0;
}