#include<iostream>
#include<vector>

using namespace std;

//recursive fucntion to print the subarrays of the given array.
void returnSubsequnce(int arr[], vector<int> subarray, int index, int n){
    if(index==n){
        cout << "{";
        for(auto i : subarray)
            cout << i << " " ;

        cout << "}";
        if(subarray.size()==0)
        cout << "{}" ;
        cout << endl;
    }
    else{
        //do not pick the current indeex of the subsequence;
        returnSubsequnce(arr, subarray, index+1, n);
        //pick the current index
        subarray.push_back(arr[index]);
        returnSubsequnce(arr, subarray, index+1, n);
        subarray.pop_back();
    }
}

int main(){
    int arr[] = {1,2};
    vector<int> vec;
    returnSubsequnce(arr, vec, 0, 2);
    /**how this call works?
     * returnSubsequence(arr, vec, 0, 2) checks if index==n, since it is not, it call
     * returnSubsequence 1. (arr, vec, 1, 2), 2. subarray.push_back(Arr[index]), 
     * 3. returnSubsequence 
    return 0;
}