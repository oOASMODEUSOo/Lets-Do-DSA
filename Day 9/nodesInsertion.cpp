/* there are multiple ways of insertion of elements inside a linked list 
    1) insertion at the start 
    2) insertion at the middle 
    3) insertioin at the start
*/

#include <iostream>

using namespace std;

class node{
    public:
        int val;
        node* next;
};

void printLL(node* n){
    while (n!=NULL){
        cout << n->val << endl;
        n = n->next;
    }
}

void frontAdd(node** head_ref, int data_enter){

    node* new_node = new node();  //created a new node

    new_node->val = data_enter;  //entering the data in the new node

    new_node->next = *head_ref;  //Make next of new node as head

    *head_ref = new_node;  //move the head to point to the new node
}

void middleAdd(node* prev_node, int data){

    if (prev_node->next == NULL){  //checking for empty previous node
        cout << "previous node cant be NULL" << endl;
    }

    node* new_node = new node();  //creating a new node for the new value

    new_node->val = data;  //entering the new data 

    new_node->next = prev_node->next;

    prev_node->next = new_node;
}

void endAdd(node** head_ref, int data){
    node* new_node = new node();  //new node created

    node* last = *head_ref;  //this is used in the process

    new_node->val = data; 

    new_node->next = NULL;

    if (*head_ref == NULL){
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL){
        last = last->next;
    }
    
    last->next = new_node;
    return;
}

int main(){
    
    node* head = NULL;
    
    endAdd(&head, 6);

    frontAdd(&head, 7);

    frontAdd(&head, 1);

    endAdd(&head, 4);

    middleAdd(head->next, 8);

    printLL(head);    

    return 0;
}