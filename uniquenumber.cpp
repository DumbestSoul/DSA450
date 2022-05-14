#include<iostream>
#include<vector>

using namespace std;

int unique(vector<int> a){
    int c = 0;
    for(int i = 0;i<a.size();i++){
        c = c^a[i];
    }
    return c;
}

int main(){
    vector<int> v1 = {3,5,6,1,6,5,3};
    vector<int> v2 = {4,5,100,5,4,1,8,10,1,8,10};
    cout << "The unique number is " << unique(v1) << endl;
    cout << "The unique number is " << unique(v2) << endl;
    return 0;
}