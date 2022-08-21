#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compareBoxes(vector<int> b1, vector<int> b2){
    return b1[2] > b2[2];
}

bool canPlace(vector<int> b1, vector<int> b2){
    if(b1[0] > b2[0] and b1[1] > b2[1] and b1[2] > b2[2]){
        return true;
    }
    return false;
}

int boxStacking(vector<vector<int>> box){
    //sorting 
    sort(box.begin(), box.end(), compareBoxes);

    //dp
    int n = box.size();
    vector<int> dp(n+1, 0);
    for(int i=0;i<n;i++){
        dp[i] = box[i][2];
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(canPlace(box[j], box[i])){
                int curr_height = box[i][2];
                if(dp[j]+ curr_height > dp[i]){
                    dp[i] = dp[j] + curr_height;
                }
            }
        }
    }
    int max_ht = 0;
    for(int i=0;i<n;i++){
        max_ht = max(max_ht, dp[i]);
    }

    return max_ht;
}

int main(){
    vector<vector<int>> box = {
        {2,1,2},
        {3,2,3},
        {2,2,8},
        {2,3,4},
        {2,2,1},
        {4,4,5},
    };

    int height = boxStacking(box);
    cout << "The maximum height of the stack is " << height << endl;
    return 0;
}