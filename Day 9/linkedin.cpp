#include <iostream>

using namespace std;

class node{
    public:
        int val;
        node* next;
};

int main(){
    
    node* head = NULL;
    node* second = NULL;   //here three NULL pointer names head second third are created of type node
    node* third = NULL;

    head = new node();
    second = new node();  //here we call node consturctor inside the NULL pointer and assign it 
    third = new node();

    head->val = 1;
    head->next = second;

    second->val = 2;
    second->next = third;

    third->val = 3;
    third->next = NULL;   //Last node is assigned a null to define that the linked list had ended


    return 0;
}