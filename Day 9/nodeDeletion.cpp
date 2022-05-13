/*
To delete a node from the linked list, we need to do the following steps. 
1) Find the previous node of the node to be deleted. 
2) Change the next of the previous node. 
3) Free memory for the node to be deleted.
*/

#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void push(Node** head_ref, int data){
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void printList(Node* n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}

void deleteNode(Node** head_ref, int key){

    Node* temp = *head_ref;  //created a temp pointer with dereference to the headref provided
    Node* prev = NULL;  //prev node created and entered NULL in its next

    if (temp != NULL && temp->data == key){  //check if the node with the value
        *head_ref = temp->next;  //if found headref me temp ke next ka value daal do
        delete temp;            //free the memory
        return;                //and exit the func
    }

    else{  //if the head isnt the key we were looking for 
        while (temp != NULL && temp->data != key){      //then run a loop to find where the key is
            prev = temp;    //when found put the whole value of temp into prev 
            temp = temp->next;  //and in temp put adress jo temp ke next me pada hai
        }
    }

    if (temp == NULL){  //temp if found null 
        return;     //then exit of the function 
    }

    prev->next = temp->next;    //
    delete temp;  //delete the temp pointer created

}

int main(){
    
    Node* head = NULL;

    push(&head, 7); push(&head, 1); push(&head, 3); push(&head, 2);

    puts("Created Linked List: ");
    printList(head);

    deleteNode(&head, 1);
    cout << "linked list after deletion of number 1: ";
    printList(head);

    return 0;
}