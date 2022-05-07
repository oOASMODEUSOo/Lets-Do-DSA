#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* prev;
        Node* next;
};

void push(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->prev = NULL;
    new_node->next = (*head_ref);
    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;
    (*head_ref) = new_node;
}

void printList(Node* node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

void deleteNode(Node** head_ref, Node* del){
    if (*head_ref == NULL || del == NULL){
        return;
    }

    if (*head_ref == del){
        *head_ref = del->next;
    }

    if (del->next != NULL){
        del->next->prev = del->prev;
    }

    if (del->prev != NULL){
        del->prev->next = del->next;
    }
    free(del);
    return;
        
}

int main(){
    Node* head = NULL;
 
    push(&head, 2);
    push(&head, 4);
    push(&head, 8);
    push(&head, 10);
 
    cout << "Original Linked list ";
    printList(head);
 
    deleteNode(&head, head); 
    deleteNode(&head, head->next); 
    deleteNode(&head, head->next); 
 
    cout << "\nModified Linked list ";
    printList(head);
 
    return 0;
}