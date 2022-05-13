#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr, int size){
	for (int i = 1 ; i < size ; i++){
		for (int j = 0 ; j < size-i ; j++){
			if (arr[j+1] < arr[j]){
				swap(arr[j],arr[j+1]);
                // int temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
		        // cout << "swapped";
			}
		}
	}	
}

//this is done in class 


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

    bubbleSort(elements, size);

    cout << "elements of list after sorting ";
    for (int i = 0 ; i < size ; i++){
        cout << elements[i] << " ";
    }

    return 0;
}

