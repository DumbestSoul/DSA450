#include<iostream>
#include<vector>

using namespace std;

int lower_bound(vector<int> a, int key){
    int s = 0;
    int e = a.size()-1;

    int ans = -1;

    while(s<=e){
        int mid = (s+e)/2;
        if(a[mid]==key){
            ans = mid;
            e = mid - 1;
        }
        else if(a[mid] > ans){
            e = mid-1;
        }
        else{
            s = mid + 1;
        }
    }

    return ans;
}

int main(){

    vector<int> arr = {0,1,1,2,3,3,3,3,4,5,5,5,10};
    int n = arr.size();
    cout << lower_bound(arr, 3) << endl;
    return 0;
}