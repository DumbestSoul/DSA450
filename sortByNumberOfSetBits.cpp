#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int countSetBits(int n){
    int count = 0;
    while(n>0){
        count += (n&1);
        n = (n>>1);
    }
    return count;
}

bool compare(int a, int b){
    if(countSetBits(a)==countSetBits(b))
        return a < b ? true : false;
    else
        return countSetBits(a) < countSetBits(b) ? true : false;
}

void sortArray(vector<int> &nums){
    sort(nums.begin(), nums.end(), compare);
}

void displayVector(vector<int> a){
    for(int i : a){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    vector<int> a = {1,2,3,4,5,6,7,8,9};
    displayVector(a);
    sortArray(a);
    displayVector(a);
    return 0;
}