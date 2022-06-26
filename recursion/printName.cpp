#include<iostream>

using namespace std;

int count=0;

void printName(string name){
    if(count > 4){
        return;
    }
    cout << name << endl;
    count++;
    printName(name);
}

int main(){
    printName("RAJAT KISHORE ACHARYA");
    return 0;
}