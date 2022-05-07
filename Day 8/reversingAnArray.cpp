//this is one of the ways to reverse an array 
//this method involes interchanging the last and the first element of a array
//to make it easier, we assume that we know the size of the array or how many elements it contains

#include <iostream>

using namespace std;

void reverseArr(int arr[], int size){
    int reverseCounter = size;
    for (int i = 0 ; i<(size/2) ; i++){
        if (i < reverseCounter){
            int temp = arr[i];
            arr[i] = arr[reverseCounter - 1];
            arr[reverseCounter - 1] = temp;
            reverseCounter--;
        }
    }
}

int main(){

    int arr[100], size;
    cout << "Enter the size of the array: ";
    cin >> size;

    for (int i = 0; i<size; i++){
        cout << "Enter the " << i+1 << "element: ";
        cin >> arr[i];
    }

    cout << "array before reversing";
    for (int i = 0; i<size; i++){
        cout << arr[i]<< endl;
    }
    
    reverseArr(arr, size);

    cout << "array after reversing";
    for (int i = 0; i<size; i++){
        cout << arr[i]<< endl;
    }


    return 0;
}