#include <iostream>
using namespace std;

void findingTheMinimunTime(){
    int* arr1;
    int* arr2;
    int size1;
    cout << "Enter the number of food items: ";
    cin >> size1;

    arr1 = new int[size1];
    arr2 = new int[size1];

    for (int i = 0 ; i<size1 ; i++){
        cout << "enter " << i+1 << "th element: ";
        cin >> arr1[i];
    }
    for (int i = 0 ; i<size1 ; i++){
        cout << "enter " << i+1 << "th element: ";
        cin >> arr2[i];
    }

    int minTime = 0;
    for (int i = 0 ; i < size1 ; i++){
        if(arr1[i] < arr2[i] && arr1[i] > minTime){
            minTime = arr1[i];
            // cout << "cond";
        }
        else if (arr1[i] > arr2[i] && arr2[i] > minTime){
            minTime = arr2[i];
        }
        else if (arr1[i] == arr2[i] && arr1[i] > minTime){
            minTime =  arr1[i];
        }            
    }
    cout << minTime;
}

int main(){

    int t;
    cin >> t;
    for (int j = 1 ; j <= t ; j++)
        findingTheMinimunTime();

    return 0;
}

//1 4 1 2 3 4 3 3 3 3 2 3 4 8 5 2 6 7 2 3