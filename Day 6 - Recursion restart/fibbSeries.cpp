#include <iostream>

using namespace std;

int fibb(int n){
    if (n==1)
        return 1;
    else if (n==0)
        return 0;
    else{
        return fibb(n-1) + fibb(n-2);
    }
}
    

int main(){
    
    int position;
    cin >> position;

    int ans = fibb(position);
    
    cout << "The fibb series of " << position << " is: " << ans;

    return 0;
}