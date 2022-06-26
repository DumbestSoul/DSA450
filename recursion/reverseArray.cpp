#include<iostream>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void reverseArray(int arr[], int l, int u){
    if(l >= u){
        return;
    }
    swap(arr[l], arr[u]);
    reverseArray(arr, l+1, u-1);
}

void reverseArraywithOnePointer(int arr[], int i, int n){
    if(i >= n/2){
        return;
    }
    swap(arr[i], arr[n-i-1]);
    reverseArraywithOnePointer(arr, i+1, n);
}

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int arr2[6] = {6, 5, 4, 3, 2, 1};
    for(int i : arr)
        cout << i << " ";
    cout << endl;
    for(int j : arr2)
        cout << j << " ";
    reverseArray(arr, 0, 5);
    reverseArraywithOnePointer(arr2, 0, 6);
    cout << endl;
    for(int i : arr)
        cout << i << " ";
    cout << endl;
    for(int j : arr2)
        cout << j << " ";
    return 0;
}