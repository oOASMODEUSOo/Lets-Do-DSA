#include <iostream>

using namespace std;

bool linearSearch(int arr[], int size, int key){
    for (int j = 0 ; j<size ; j++){
        if (arr[j] == key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[100], elements;
    int key;

    cout << "Enter the number of elements: ";
    cin >> elements;

    for (int i = 0; i<elements; i++){
        cout << "Enter the " << i+1 << "element: ";
        cin >> arr[i];
    }

    cout << "Enter the element you wanna check for: ";
    cin >> key;

    bool searched = linearSearch(arr, elements, key);

    if (searched){
        cout << "Mil gya bhai!";
    }
    else{
        cout << "F bhai element nai mila";
    }
    return 0;
}