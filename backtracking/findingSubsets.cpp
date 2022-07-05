#include<iostream>

using namespace std;

void findingSubsets(char *inp, char *out, int i, int j){
    //base case
    if(inp[i]=='\0'){
        out[j] = '\0';
        cout << out << endl;
        return;
    }
    //recursive case
    //including the ith letter
    out[j] = inp[i];
    findingSubsets(inp, out, i+1, j+1); 
    //excluding the ith letter
    findingSubsets(inp, out, i+1, j);
}

int main(){
    char inp[100];
    char out[100];
    cin >> inp;
    findingSubsets(inp, out, 0, 0);
    return 0;
}