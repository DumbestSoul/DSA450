#include<iostream>

using namespace std;

int partition(int a[], int l, int r){
    int pivot = a[l];
    
    int count=0;
    for(int i=l+1;i<=r;i++){
        if(a[i] <= pivot)
            count++;
    }
    //giving pivot its correct position
    int pIndex = l+count;
    swap(a[pIndex], a[l]);
    
    ///sorting left and right side of the pivot
    int i = l;
    int j = r;
    while(i < pIndex && j > pIndex){
        while(a[i] <= pivot){
            i++;
        }
        while(a[j] > pivot){
            j--;
        }
        if(i < pIndex && j > pIndex){
            swap(a[i++], a[j--]);
        }
    }
    return pIndex;
}

void quickSort(int a[], int l, int r){
    if(l < r){
        int p = partition(a, l, r);
        quickSort(a, l, p-1);
        quickSort(a, p+1, r);
    }
    return;
}

void display(int a[], int n){
    for(int i=0;i<n;i++){
        cout << " " << a[i];
    }
    cout << "\n";
}

int main(){
    int arr[]=  {5, 3, 1, 78, 10, 4, 23};
    cout << "ARRAY BEFORE SORTING IS\n";
    display(arr, 7);
    quickSort(arr, 0, 6);
    cout << "ARRAY AFTER SORTING IS\n";
    display(arr, 7);
    return 0;
}