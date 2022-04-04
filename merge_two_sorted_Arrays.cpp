//problem statement:
//Given two sorted arrays arr1[] of size N and arr2[] of size M. Each array is sorted 
//in non-decreasing order. Merge the two arrays into one sorted array in 
//non_decreasing order without using any extra space.

/**Example 1
 * N = 4, M = 5
 * arr1[] = {1, 3, 5, 7}
 * arr2[] = {0, 2, 6, 8, 9}
 * Output : 0 1 2 3 5 6 7 8 9
 *  Explanation : Since you can't use any extra space, modify the given array to form
 * arr1[] = {0, 1, 2, 3}
 * arr2[] = {5, 6, 7, 8, 9}
 **/

#include<bits/stdc++.h>

using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void display(int arr1[], int arr2[], int m, int n){
    for(int i=0;i<m;i++)
        cout << arr1[i] << " ";
    cout << " ";
    for(int j=0;j<n;j++)
        cout << arr2[j] << " ";

    cout << endl;
}

void mergeSortedArray(int arr1[], int arr2[], int m, int n){
    int i=0, j = 0;
    while(i < m && j < n){
        if(arr1[i] > arr2[j]){
            swap(arr1[i], arr2[j]);
            i++;
        }
        if(arr1[i] < arr2[j]){
            j++;
        }
        if(i==m-1 && j != n-1)
            j++;
        
        if(i!=m-1 && j == n-1)
            i++;
    }
    sort(arr1, arr1+m);
    sort(arr2, arr2+n);
}


int main(){
    int arr1[] = {1, 3, 5, 7}, arr2[] = {0, 2, 6, 8, 9}, m=4, n=5;
    cout << "Before operation the arrays are as follows..." << endl;
    display(arr1, arr2, m, n);
    mergeSortedArray(arr1, arr2, m, n);
    cout << "After operation the arrays are as follows..." << endl;
    display(arr1, arr2, m, n);
    cout << "Thank you!!1" << endl;
    return 0;
}