#include <iostream>

using namespace std;

void funt(int n){
    if (n>0){
        cout << n;
        funt(n-1);
    }
}

int main(){
    
    int x = 3;


    return 0;
}

/*
funt(3)
/     \
3   funt(2)
    /     \
    2   funt(1)
        /     \
        1   funt(0)

opt: 3 2 1
*/
