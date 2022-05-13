#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector <int> RanVec;
    RanVec.push_back(2);
    RanVec.push_back(5);
    RanVec.push_back(8);

    //getting a output using normal looping
    for (int i = 0; i < RanVec.size(); i++){
        cout << RanVec[i] << " ";
    }

    vector<int>::iterator it;


    cout << "getting the output using a iterator";
    for (it=RanVec.begin() ; it!=RanVec.end() ; it++){
        cout << *it << " ";
    }

    cout << "getting the output using auto keyword";
    for (auto element:RanVec){
        cout << element << " ";
    }

    //popping an element
    RanVec.pop_back();
    
    // vector<int> some (3,4,0,5,6);

    return 0;
}