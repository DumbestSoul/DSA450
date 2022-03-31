#include<iostream>
using namespace std;

int kadane_algo(int arr[], int n){
    int global_max = 0;
    int local_max = 0;
    for(int i=0;i<n;i++){
        local_max += arr[i];
        if(global_max < local_max)
            global_max = local_max;
        if(local_max < 0)
            local_max = 0;
    }
    return global_max;
}

int main(){
    int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << "The given array is....\n";
    for(auto i: arr)
        cout << i << " ";
    cout << "\nThe maximum sum of contigious sub-array is " << kadane_algo(arr, 8) << endl;
    return 0;
}