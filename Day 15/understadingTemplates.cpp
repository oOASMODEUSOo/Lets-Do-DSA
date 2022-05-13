#include <iostream>

using namespace std;

//applying max function using Templates
template <typename T> T maxFinder(T one, T two){
    if (one > two)
        return one;
    else 
        return two;
}

//applying bubble sort function using templates
template <class T> void bubbleSort(T a[], int n){
    for (int i = 0; i < n - 1; i++)
        for (int j = n - 1; i < j; j--)
            if (a[j] < a[j - 1])
                swap(a[j], a[j - 1]);
}

//is wale me kuch to krra hu, bohot kuch apply kr dia isme maine
template <typename T> class Array{
    private: 
        T* arr;
        int size;

    public:
        Array(T arr[], int s);
        void print();
};

template <typename T> Array<T>::Array(T arr[], int s){
    ptr = new T[s];
    size = s;
    for (int i = 0; i < size; i++)
        ptr[i] = arr[i];
}

template <typename T> void Array<T>::print()
{
    for (int i = 0; i < size; i++)
        cout << " " << *(ptr + i);
    cout << endl;
}

int main(){
    
    int answer = maxFinder(3, 5);
    cout << answer;

    int a[5] = { 10, 50, 30, 40, 20 };
    int size = 5;
    bubbleSort<int>(a,size);

    for (int i = 0 ; i<size ; i++){
        cout << a[i] << " ";
    } 

    //class use
    int some[5] = { 1, 2, 3, 4, 5 };
    Array<int> a(some, 5);
    // a.print();
    return 0;
}