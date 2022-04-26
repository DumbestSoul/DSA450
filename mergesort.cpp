#include<iostream>

using namespace std;

void merge(int arr[], int l, int m, int b){
    //create two arrays L <- A[p, q] and M <- A[q+1, r];
    int n1 = m - l + 1;
    int n2 = b - m;
    int L[n1], M[n2];

    for(int i=0;i<n1;i++){
        L[i] = arr[l+i];
    }
    for(int j = 0;j<n2;j++){
        M[j] = arr[m+1+j];
    }

    //indexes to maintain pointer to main array elements and the subarrays
    int i = 0, j = 0, k = l;

    // Until we reach the end of either M or L, pick the largest element and put them
    //in the right place.

    while(i < n1 && j < n2){
        if(L[i] <= M[j]){
            arr[k] = L[i];
            i++;
        }
        else{
            arr[k] = M[j];
            j++;
        }
        k++;
    }

    // while we have left over elements...we just copy it into the main array.
    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int b){
    if(l > b)
        return;
    if(l < b){
        int mid = (l+b)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, b);
        merge(arr, l, mid, b);
    }
}

int main(){
    int arr[] = {5, 7, 10, 2, 4, 9, 1, 3, 50, 12};
    cout << "Array before sorting is as follows..." << endl;
    for(auto i: arr)
        cout << i << " ";
    mergeSort(arr, 0, 9);
    cout << "\nArray after sorting is as follows..." << endl;
    for(auto i: arr)
        cout << i << " ";
    cout << "\nThank you!!!" << endl;
    return 0;
}