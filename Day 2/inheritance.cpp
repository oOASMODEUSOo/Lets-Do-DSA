#include <iostream>

using namespace std;

class Human{
    public:
        int height;
        int weight;
        int age;

        int getAge(){
            return this -> age;
        }

        int setWeight(int some){
            this->weight = some;
        }
};

class male: public Human{
    public:
        string color;
        void sleep(){
            cout << "male sleeping" << endl;
        }
};

int main(){
    
    male object1;
    cout << object1.age <<endl;
    cout << object1.weight << endl;
    cout << object1.height << endl;

    cout << object1.color << endl; 
    object1.setWeight(99);
    cout << object1.weight << endl;


    return 0;
}