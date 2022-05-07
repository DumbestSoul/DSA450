#include<iostream>
using namespace std;

int returnSum(int input){
    if(input <= 1)
        return input;
    return input + returnSum(input - 1);
}

int main(){
    cout << returnSum(10);
}