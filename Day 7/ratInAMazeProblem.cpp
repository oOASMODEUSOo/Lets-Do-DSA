#include <iostream>

using namespace std;

/*
suppose we have maze like this

[[1,0,1,0,1]
 [1,1,1,1,1]
 [0,1,0,1,0]
 [1,0,0,1,1]
 [1,1,1,0,1]]   This represent the maze we have 1 being where we can move and 0 being blocked

[[1,0,0,0,0]
 [1,1,1,1,0]
 [0,0,0,1,0]
 [0,0,0,1,1]
 [0,0,0,0,1]]   The solution to the problem would look something like this

*/

//My Function
bool ifBlocked(int x, int y, int arr[][5]){
    if (arr[x][y] == 1)
        return false;
    else if (arr[x][y] == 0)
        return true;
}

//Apna college wali didi
bool isSafe(int** arr, int x, int y, int n){
    if (x<n && y<n && arr[x][y]==1){
        return true;
    }
    return false;
}

bool ratinmaze(int arr[][5], int x, int y, int n, int sArr[][5]){
    
    if (x==n-1 && y==n-1){
        sArr[x][y] =1;
        return true;
    }
    
    if (ifBlocked(x,y,arr)){
        sArr[x][y] = 1;
        if (ratinmaze(arr, x+1, y, 5, sArr))
            return true;
        if (ratinmaze(arr, x, y+1, 5, sArr))
            return true;

        sArr[x][y] = 0;
        return false;
    }       
    return false;
}

int main(){
    int maze[5][5] = {{1,0,1,0,1},
                      {1,1,1,1,1},
                      {0,1,0,1,0},
                      {1,0,0,1,1},
                      {1,1,1,0,1}};
    
    int sMaze[5][5] = {{0,0,0,0,0},
                      {0,0,0,0,0},
                      {0,0,0,0,0},
                      {0,0,0,0,0},
                      {0,0,0,0,0}};

    //  OR

    int n;
    cin >> n;

    int** arr = new int*[n];
    for (int i=0;i<n;i++){
        arr[i] = new int[n];
    }

    for (int i = 0; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            cin >> arr[i][j];
        }
    }

    int** sArr = new int*[n];
    for (int i=0;i<n;i++){
        sArr[i] = new int[n];
        for (int j = 0 ; j < n ; j++){
            sArr[i][j] = 0;
        }

    }
    return 0;
}