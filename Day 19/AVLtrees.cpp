#include <iostream>

using namespace std;

class node{
        public:
            int data;
            node *left;
            node *right;
            int height;
};

//function to compare between 2 values
int max(int a, int b){
    return (a > b)? a : b;
}

//function to get the height of the tree or subtree
int height(node *N){
    if (N == NULL)
        return 0;
    return N->height;
}

//function to generate a node and add the value to it and assign NULL to left and right of it
node* newNode(int key){
    node* Node = new node();
    Node->data = key;
    Node->left = NULL;
    Node->right = NULL;
    Node->height = 1; // new node is initially added at leaf
                    
    return(Node);
}

//function to get balance factor
int getBalance(node *N){
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}

node *rightRotate(node *y){
    node *x = y->left;
    node *T2 = x->right;
 
    // Perform rotation
    x->right = y;
    y->left = T2;
 
    // Update heights
    y->height = max(height(y->left),
                    height(y->right)) + 1;
    x->height = max(height(x->left),
                    height(x->right)) + 1;
 
    // Return new root
    return x;
}

node *leftRotate(node *x)
{
    node *y = x->right;
    node *T2 = y->left;
 
    // Perform rotation
    y->left = x;
    x->right = T2;
 
    // Update heights
    x->height = max(height(x->left),   
                    height(x->right)) + 1;
    y->height = max(height(y->left),
                    height(y->right)) + 1;
 
    // Return new root
    return y;
}

node* insert(node* Node, int key)
{
    /* 1. Perform the normal BST insertion */
    if (Node == NULL)
        return(newNode(key));
 
    if (key < Node->data)
        Node->left = insert(Node->left, key);
    else if (key > Node->data)
        Node->right = insert(Node->right, key);
    else // Equal keys are not allowed in BST
        return Node;
 
    /* 2. Update height of this ancestor Node */
    Node->height = 1 + max(height(Node->left),
                        height(Node->right));
 
    /* 3. Get the balance factor of this ancestor
        Node to check whether this Node became
        unbalanced */
    int balance = getBalance(Node);
 
    // If this Node becomes unbalanced, then
    // there are 4 cases
 
    // Left Left Case
    if (balance > 1 && key < Node->left->data)
        return rightRotate(Node);
 
    // Right Right Case
    if (balance < -1 && key > Node->right->data)
        return leftRotate(Node);
 
    // Left Right Case
    if (balance > 1 && key > Node->left->data)
    {
        Node->left = leftRotate(Node->left);
        return rightRotate(Node);
    }
 
    // Right Left Case
    if (balance < -1 && key < Node->right->data)
    {
        Node->right = rightRotate(Node->right);
        return leftRotate(Node);
    }
 
    /* return the (unchanged) Node pointer */
    return Node;
}

void preOrder(node *root)
{
    if(root != NULL)
    {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main(){
    


    return 0;
}