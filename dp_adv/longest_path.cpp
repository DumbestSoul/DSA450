#include<bits/stdc++.h>

#define int long long

using namespace std;

const int N = 1e5+1;

vector<int> gr[N];

int dp(int cur){
    int ans = 0;
    for(auto x : gr[cur]){
        ans = max(ans, dp(x)+1);
    }
}

int32_t main(){
    int n, m;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int x, y;
        cin >> x >> y;
        gr[x].push_back(y);
    }

    int ans = 0;
    for(int i=1;i<=n;i++){
        ans = max(ans, dp(i));
    }

    cout << ans;
    return 0;
}