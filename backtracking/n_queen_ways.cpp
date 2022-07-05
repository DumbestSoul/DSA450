#include<iostream>

using namespace std;

bool canPlace(int board[20][20], int n, int x, int y){
    //column
    for(int k=0;k<x;k++){
        if(board[k][y]==1){
            return false;
        }
    }
    //left diagonal
    int i = x;
    int j = y;
    while(i>=0 and j>=0){
        if(board[i][j] == 1){
            return false;
        }
        i--;
        j--;
    }

    //right diagonal
    i = x;
    j = y;
    while(i>=0 and j<n){
        if(board[i][j]==1)
            return false;
        i--;
        j++;
    }
    return true;
}

void printBoard(int n, int board[][20]){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int solveNQueen(int n, int board[20][20], int i){
    //base case
    if(i==n){
        // printBoard(n, board);
        return 1;
    }
    //recursive case
    //try to place the queen in every safe position
    int ans = 0;
    for(int j=0;j<n;j++){
        // whether the current i and j are safe or not
        if(canPlace(board, n, i, j)){
            board[i][j] = 1;
            ans += solveNQueen(n, board, i+1);
            //backtrack
            board[i][j] = 0;
        }
    }
    return ans;
}

int main(){
    int board[20][20] = {0};
    int n;
    cin >> n;
    cout << "No of ways to solve the N-Queen is "  << solveNQueen(n, board, 0);
    return 0;
}