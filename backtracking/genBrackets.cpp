#include<iostream>

using namespace std;

void genBrackets(string output, int n, int open, int close, int i){
    //base case
    if(i==2*n){
        cout << output << endl;
        return;
    }
    //open
    if(open<n)
        genBrackets(output+'(', n, open+1, close, i+1);
    
    //close
    if(close<open)
        genBrackets(output+')', n, open, close+1, i+1);
}

int main(){
    string output;
    int n;
    cin >> n;
    genBrackets(output, n, 0, 0, 0);
    return 0;
}
