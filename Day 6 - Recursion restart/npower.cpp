#include <iostream>

using namespace std;

int npow(int n){
    if (n>0){
        return 2*npow(n-1);
    }
    return 1;
}

int main(){
    
    int n;
    cin >> n;

    int ans = npow(n);

    cout << "The power of " << n << " is: " << ans;

    return 0;
}