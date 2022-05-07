#include <iostream>

using namespace std;

int binarySearch(int arr[], int size, int key);

int main(){
    
    int even[6] = {2 , 4 , 6 , 8 , 12 , 18};
    int odd[5] = {3 , 8 , 11 , 14 , 16};

    int evenList = binarySearch(even, 6, 12);
    int oddList = binarySearch(odd, 5, 3);

    cout << "Index in even list: " << evenList;
    cout << "Index in odd list: " << oddList;  

    return 0;
}

int binarySearch(int arr[], int size, int key){
    int start = 0, end = size - 1;

    int mid = start + (end-start)/2;

    while (start <= end){
        if (arr[mid] == key){
            return mid;
        }

        if (arr[mid] < key){
            start = mid + 1;
        }

        if (arr[mid] > key){
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }
    return -1;
}