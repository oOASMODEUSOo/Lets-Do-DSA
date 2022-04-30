#include <iostream>

using namespace std;

//this is something 
int fun(int n){
    if (n>0){
        return fun(n-1) + n;
    }
    return 0;
}

//this is how to handle static variable
int fun2(int n){
    static int x=0;
    if (n>0){
        x++;
        return fun2(n-1) + x;
    }
    return 0;
}

int main(){
    
    int a = 5;
    cout << fun2(a);

    return 0;
}