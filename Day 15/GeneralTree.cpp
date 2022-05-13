#include <iostream>
#include "TreeNode.h"

using namespace std;

TreeNode<int>* takeInput(); 
void printTree(TreeNode<int>* root);

int main(){
    
    TreeNode<int>* root = takeInput();
    printTree(root);

    return 0;
}

TreeNode<int>* takeInput(){
    int rootData;
    cout << "Enter data" << endl;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    int n;
    cout << "enter the number of children nodes" << endl;
    cin >> n;
    for (int i = 0 ; i < n ; i++){
        TreeNode<int>* child 
    }
}

void printTree(TreeNode<int>* root){

}