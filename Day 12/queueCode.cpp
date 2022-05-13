#include <iostream>

using namespace std;

class Queue{
    //data members
    public:
        int* queue;
        int size;
        int front;
        int rear;

    //queue constructor
    Queue(int size){
        this->size = size;
        queue = new int[size];
        this->front = 0;
        this->rear = -1;
    }

    //function related to queue
    void push(int val){
        if (rear < size){
            rear = rear + 1;
            queue[rear] = val;
        }
        
        else{
            cout << "bhar gya hai queue" << endl;
        }
    }

    void pop(){
        if (queue[front] == 0){
            cout << "Khali queue me kya jhakta hai?";
        }

        if (rear == 0){     //problem here
            queue[front] == 0;
        }

        else{
            int reverseCounter = rear;
            for (int i = 0 ; i < reverseCounter ; i++){
                queue[i] = queue[i+1];
            }
        }
    }

    bool isEmpty(){
        if (queue[front] == 0){
            return true;
        }
        return false;
    }

    void frontVal(){
        cout << queue[front] << " ,yahi value hai front element ki" << endl;
    }

    void showQueue(){
        for (int i = 0 ; i < size ; i++){
            cout << queue[i] << endl;
        }
    }

};

int main(){

    Queue something(5);
    something.push(5);
    something.push(10);
    something.push(12);
    something.push(7);
    something.push(3);

    cout << "Lets print the queue";

    something.showQueue();

    cout << "taking a look at the first element: ";
    something.frontVal();

    something.pop();
    something.frontVal();

    something.pop();
    something.frontVal();

    something.pop();
    something.frontVal();

    something.pop();
    something.frontVal();

    something.pop();
    something.frontVal();

    something.pop();
    something.frontVal();

    return 0;
}