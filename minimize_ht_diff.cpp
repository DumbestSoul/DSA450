#include<iostream>
#include<algorithm>

using namespace std;


int minimize_hts(int arr[], int n, int k){
    int ans;
    if(n==1)
        return 0;
    else{
        sort(arr, arr+n);
            //current possible answer;
        ans = arr[n-1] - arr[0];
            //current possible candidates;
         int tempmax = arr[n-1] - k;
        int tempmin = arr[0] + k;
            //temp variables for the possible minimized & maximum values
        int mi, ma;
            //loop on each varibale of the array.
        for(int i = 1;i<n;i++){
            mi = min(tempmin, arr[i]-k);
            ma = max(tempmax, arr[i-1]+k);
            if(mi < 0) continue;
            ans = min(ans, ma-mi);
        }
        return ans;
    }
}

int main(){
    int arr[] = {1, 10, 14, 14, 14, 15};
    int n = 6, k = 6;
    cout << "The minimized difference of the maximumheights is given as..." << minimize_hts(arr, n, k);
    return 0;
}