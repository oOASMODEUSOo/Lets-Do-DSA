#include <iostream>

using namespace std;

int getMax(int rry[], int n){
    int max = INT64_MIN;

    for (int i = 0; i<n; i++){
        if (rry[i] > max){
            max = rry[i];
        }
    }

    //returning max 
    return max;
}

int getMin(int rry[], int n){
    int min = INT64_MAX;

    for (int i = 0; i<n; i++){
        if (rry[i] < min){
            min = rry[i];
        }
    }

    //returning max 
    return min;
}

int main(){
    
    int size, arr[100];
    cin >> size;
    for (int i = 0; i<size; i++){
        cin >> arr[i];
    }

    return 0;
}