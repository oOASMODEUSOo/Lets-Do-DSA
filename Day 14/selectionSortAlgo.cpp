#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& arr, int n){
	for (int i = 0; i < n-1 ; i++){
		int minIndex = i;

		for (int j = i+1 ; j<n;j++){
			if (arr[j] < arr[minIndex]){
				minIndex = j;
			}	
		}
		swap(arr[minIndex], arr[i]);
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

    cout << "elements of list before sorting";
    for (int i = 0 ; i < size ; i++){
        cout << elements[i] << " ";
    }    

    selectionSort(elements, size);

    cout << "elements of list after sorting";
    for (int i = 0 ; i < size ; i++){
        cout << elements[i] << " ";
    }

    return 0;
}
