#include<iostream>
#include<algorithm>

using namespace std;

int findDuplicate(int arr[], int n){
    int duplicate;
    sort(arr, arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            duplicate = arr[i];
            break;
        }
        else{
            continue;
        }
    }
    return duplicate;
}

int main(){
    int arr[] = {1,4,2,5,3,5};
    cout << "The duplicate of the given integer array is " << findDuplicate(arr, 6);
    return 0;
}