#include<bits/stdc++.h>

using namespace std;

bool check_rotation(string s1, string s2){
    if(s1.size()!=s2.size())
        return false;
    else{
        queue<char> s;
        for(char x : s1)
            s.push(x);
        queue<char> goal;
        for(char x : s2)
            goal.push(x);
        int k = goal.size();
        while(k--){
            char ch = goal.front();
            goal.pop();
            goal.push(ch);
            if(s == goal)
                return true;
        }
        return false;
    }
}


int main(){
    string s1 = "ABCD";
    string s2 = "CDAB";
    if (check_rotation(s1, s2))
        cout << s2 << " is a rotated form of " << s1
             << endl;
    else
        cout << s2 << " is not a rotated form of " << s1
             << endl;
    string s3 = "ACBD";
    if (check_rotation(s1, s3))
        cout << s3 << " is a rotated form of " << s1
             << endl;
    else
        cout << s3 << " is not a rotated form of " << s1
             << endl;
    return 0;
}