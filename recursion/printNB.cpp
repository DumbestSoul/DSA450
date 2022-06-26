#include<iostream>

using namespace std;

void printNumBackTrack(int i, int n){
    if(i < n) return;
    printNumBackTrack(i-1, n);
    cout << i << " ";
}

int main(){
    printNumBackTrack(5, 1);
    return 0;
}