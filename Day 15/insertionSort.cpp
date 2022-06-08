#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr, int size){
    for (int i = 1 ; i < size ; i++){
        int someElement = arr[i];
        for (int j = i;  j>0 ; j--){
            if (arr [j] < arr[j-1]){
                swap(arr [j],arr[j-1]);
            }
        }
    }
}



int main(){
    
    int size = 9;
    vector<int> elements;
    
    elements.push_back(10);
    elements.push_back(2);
    elements.push_back(4);
    elements.push_back(22);
    elements.push_back(12);
    elements.push_back(1);
    elements.push_back(3);
    elements.push_back(5);
    elements.push_back(21);

    cout << "elements of list before sorting ";
    for (int i = 0 ; i < size ; i++){
        cout << elements[i] << " ";
    }    

    cout << endl;

    insertionSort(elements, size);

    cout << "elements of list after sorting ";
    for (int i = 0 ; i < size ; i++){
        cout << elements[i] << " ";
    }

    return 0;
}


//This is how sir did it
//best case is n
//worst case is n^2

/*
#include <iostream>

using namespace std;

int main(){
    
    int n = 5, arr[n];
    for (int i = 0 ; i < n ; i++){
        cin  >> arr[i];
    }

    for (int i = 1 ; i < n ; i++){
        int current = arr[i];
        int j = i-1;
        while (arr[j] > current && j >=0){
            arr[j+1] = arr[j];
            j--;
        }
    } 
    return 0;
}
*/