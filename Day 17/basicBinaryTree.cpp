#include <iostream>

using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->left = NULL;
    }
};

int main(){
    
    node* root = NULL;

    root = new node(1);  //root node
    root->left = new node(3);   //left child 
    root->right = new node(5);  //right child

    root->left->left = new node(7);
    root->left->right = new node(11);

    root->right->left = new node (17);

    return 0;
}