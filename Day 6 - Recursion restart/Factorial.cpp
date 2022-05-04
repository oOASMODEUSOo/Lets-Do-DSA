#include <iostream>

using namespace std;

//how I did it
int factFind(int n){
    if (n>0){
        return n*factFind(n-1);
    }
    return 1;
}

//how Babbar did it
int factorial(int n){
    //base case
    if (n==0)
        return 1;
    
    int choti = factorial(n-1);
    int badi = n * choti;

    return badi;
}

int main(){
    
    int n;
    cin >> n;

    int ans = factFind(n);

    cout << "The factorial of " << n << "is: " << ans;

    return 0;
}