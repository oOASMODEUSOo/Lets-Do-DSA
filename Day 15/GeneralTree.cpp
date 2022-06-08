#include <iostream>
#include <queue>
#include "TreeNode.h"

using namespace std;

TreeNode<int>* takeInput(); 
void printTree(TreeNode<int>* root);
TreeNode<int>* takeInputLevelWise();
int numNodes(TreeNode<int>* root);


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
        TreeNode<int>* child = takeInput();
        root->children.push_back(child);
    }
    return root;
}

void printTree(TreeNode<int>* root){
    if (root == NULL){
        return;
    }
    cout << root->data << ":";
    for (int i = 0 ; i < root->children.size() ; i++){
        printTree(root->children[i]);
    }
}

TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout << "enter root data" << endl;
    cin >> rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size()!=0){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout << "enter num of children of" << front->data << endl;
        int numChild;
        cin >> numChild;
        for (int i = 0 ; i < numChild ; i++){
            int childData;
            cout << "enter" << i << "th child of" << front->data <<endl;
            cin >> childData;
            TreeNode<int>* child = new TreeNode<int> (childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

int numNodes(TreeNode<int>* root){
    if (root == NULL){
        return 0;
    }
    int ans = 1;
    for (int i = 0 ; i < root->children.size() ; i++){
        ans += numNodes(root->children[i]);
    }
    return ans;
}