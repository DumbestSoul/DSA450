#include<iostream>

using namespace std;

int minjumps(int arr[], int n){
    if(n<=1)
        return 0;

    if(arr[0]==0)
        return -1;
    
    int maxReach = 0;
    int step = arr[0];
    int jumps = 1;

    for(int i = 1;i < n;i++){
        if(i == n-1)
            return jumps;

        maxReach = max(maxReach, i + arr[i]);
        step--;

        if(step==0){
            jumps++;
            if(i >= maxReach)
                return -1;

            step = maxReach-1;
        }
    }
    return -1;
}

int main(){
    int arr[] = { 1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9 };
    int size = sizeof(arr) / sizeof(int);
 
    // Calling the minJumps function
    cout << "Minimum number of jumps to reach end is " << minjumps(arr, size);
    return 0;
}