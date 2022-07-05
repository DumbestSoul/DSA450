#include<iostream>

using namespace std;

void TOH(int n, char from, char helper, char to){

    if(n==0)   return;

    TOH(n-1, from, to, helper);
    //i have placed n-1 on B and 
    //nth rod to C
    cout << " " << from << "->" << to << "\n";
    TOH(n-1, helper, from, to);
}

int main(){

    int n;
    cin >> n;
    TOH(n, 'A', 'B', 'C');
    return 0;
}