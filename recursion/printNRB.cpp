#include<iostream>

using namespace std;

void printNum(int i, int n){
    if(i > n){
        return;
    }
    printNum(i+1, n);
    cout << i << " ";
}

int main(){
    printNum(0, 5);
    return 0;
}