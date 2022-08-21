#include<bits/stdc++.h>
#define int long long

using namespace std;
const int N = 100;
int v[N], w[N], W, n, memo[N][1000001];

int knapsack(int index, int wt){
    if(index>=n) return 0;

    int &ans = memo[index][wt];

    if(ans!=-1) return ans;
    //do no take the item at the index
    ans = knapsack(index+1, wt);
    //take the item at the index
    if(w[index] + wt <= W){
        ans = max(ans, v[index]+knapsack(index+1, w[index]+wt));
    }
    return ans;
}

int32_t main(){
    
    cin >> n >> W;

    for(int i=0;i<n;i++){
    cin >> w[i] >> v[i];
    }

    memset(memo, -1, sizeof(memo));

    cout << knapsack(0, 0);
    
    return 0;
}