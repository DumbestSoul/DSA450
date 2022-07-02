#include<iostream>

using namespace std;

bool sortedArray(int arr[], int n){
    //base case
    if(n==1 or n==0)
        return true;
    //recursive case
    if(arr[0] < arr[1] and sortedArray(arr+1, n-1))
        return true;
    return false;
}


int main(){
    int arr[] = {2, 3, 4, 5, 6, 9, 12, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << sortedArray(arr, n);
    return 0;
}