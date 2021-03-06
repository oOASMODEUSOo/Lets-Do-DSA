// // write a function in C++ to delete a node at a given specific position 

// #include <iostream>

// using namespace std;

// class Node{
//     public: 
//         int data;
//         Node* next;
// };

// void push(Node** head_ref, int val){
//     Node* new_node = new Node();
//     new_node->data = val;
//     new_node->next = *head_ref;
//     *head_ref = new_node;
// }

// void delNode(Node** head_ref, int val){
// 	if (*head_ref == NULL){  //check if the linked list is empty
// 		return;
// 	}
	
// 	Node* temp = (*head_ref);

// 	//if heads needs to be removed
// 	if (val == 0){
// 		(*head_ref) = temp->next;  //this changes the head

// 		free(temp);  //freeing the memory of temp
// 		return;
// 	}

// 	//finding the prev node of the number that to be deleted
// 	for (int i = 0; temp!=NULL && i < val-1; i++){
// 		temp = temp->next;
// 		cout << "changed";
// 	} 

// 	//checking if the position if more than the number of nodes
// 	if (temp == NULL || temp->next == NULL);
// 			return;
	
// 	Node* next = temp->next->next;
// 	free(temp->next);
// 	temp->next = next;
// }


// void printLL(Node* head_ref){
// 	while (head_ref != NULL){
// 		cout << head_ref->data << endl;
// 		head_ref = head_ref->next;	
// 	}
// }

// int main(){
//     Node* head = new Node();

// 	push(&head, 7);
//     push(&head, 1);
//     push(&head, 3);
//     push(&head, 2);
//     push(&head, 8);

// 	cout << "after printing" << endl;
// 	printLL(head);
// 	cout << "after deletion" << endl;
// 	delNode(&head, 3);
// 	cout << "after deletion" << endl;
// 	printLL(head);

//     return 0;
// }



#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

void push(Node** head_ref, int new_data)
{
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void deleteNode(Node** head_ref, int position)
{

	if (*head_ref == NULL)
		return;

	Node* temp = *head_ref;

	if (position == 0) {

		*head_ref = temp->next;

		free(temp);
		return;
	}

	for (int i = 0; temp != NULL && i < position - 1; i++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return;

	Node* next = temp->next->next;

	free(temp->next); // Free memory

	temp->next = next;
}

void printList(Node* node)
{
	while (node != NULL) {
		cout << node->data << " ";
		node = node->next;
	}
}

int main()
{

	Node* head = NULL;

	push(&head, 7);
	push(&head, 1);
	push(&head, 3);
	push(&head, 2);
	push(&head, 8);

	cout << "Created Linked List: ";
	printList(head);
	deleteNode(&head, 4);
	cout << "\nLinked List after Deletion at position 4: ";
	printList(head);
	return 0;
}
