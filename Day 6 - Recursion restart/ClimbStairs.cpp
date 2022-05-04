#include <iostream>

using namespace std;

int countDistinctWayToClimbStair(long long nStairs){
    //base case
    if (nStairs < 0)
        return 0;

    else if (nStairs == 0)
        return 1;
    
    //processing
    else{
        return countDistinctWayToClimbStair(nStairs-1) + countDistinctWayToClimbStair(nStairs-2);
    }
}

int main(){
    
    int T;
    cin >> T;

    for (int i = 0; i < T; i++){
        int stairs;
        cin >> stairs;

        int ans = countDistinctWayToClimbStair(stairs);
        cout << ans;
    }

    return 0;
}