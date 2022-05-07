#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
};

//adding a node at the start of the doubly linked list 
void push(Node** head_ref, int new_data){  //working function
    Node* new_node = new Node();  //creating a new node

    new_node->data = new_data;  //feeding the data into the new node

    new_node->next = (*head_ref);  
    new_node->prev = NULL;

    if ((*head_ref) != NULL){
        (*head_ref)->prev = new_node;
    }

    (*head_ref) = new_node;

    cout << "starting me ghusa dia"<< endl;
}



//add a node after a given node
void insertAfter(Node* prev_ref, int data){  //working function
    if (prev_ref == NULL){
        cout << "khali hai babu";
    }
    Node* new_node = new Node();

    new_node->data = data;

    new_node->next = prev_ref->next;
    prev_ref->next = new_node;

    new_node->prev = prev_ref;

    if (new_node->next == NULL){
        new_node->next->prev = new_node;
    }

    cout << "beech me ghusa dia"<< endl;
}

void append(Node** head_ref, int data){  // not working for some reason
    Node* new_node = new Node();
    new_node->data =  data;

    Node* last_node = (*head_ref);

    new_node->next = NULL;

    if (*head_ref == NULL){
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }

    while (last_node->next != NULL){
        last_node = last_node->next;
    }

    last_node->next = new_node;
    new_node->prev = last_node;
    return; 
    cout << "end me ghusa dia" << endl;
}

void printLL(Node* start){
    while (start->next == NULL){
        cout << start->data << endl;
        start = start->next;
    }
}

int main(){
    
    Node* head = NULL;
    append(&head, 6);
    push(&head, 7);
    push(&head, 1);
    append(&head, 4);
    insertAfter(head->next, 8);

    printLL(head);

    return 0;
}