#include <iostream>
#include <queue>

using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right; 
    node(int d){
        this->data = d;
        this->right = NULL;
        this->left = NULL; 
    }
};

node* buildTree(node* root) {  //we pass the value of the pointer, because technically we are passing the pointer so with a deref with are passing the value of that
    cout << "Enter the data: " << endl;  //simply asking for value
    int data;  //variable for the data
    cin >> data;  //taking input

    root = new node(data);  //the root pointed to null but now we have called the node constructor and put data inside it

    if(data == -1) {    //if data entered is NULL then just exit out of the function no need to proced further
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;  //asking data for the left side of the current data
    root->left = buildTree(root->left);    //this is the recursive call for the left side data
    cout << "Enter data for inserting in right of " << data << endl;   
    root->right = buildTree(root->right);  //this is the recursive call for the right side data
    
    return root;  //returning the root passed after adding the left and right node
}


void levelOrderTraversal(node* root){
    queue<node*> q;  //created a queue q of data type node* which takes you to the values
    q.push(root);   //we can push the root because there is always one root node
    q.push(NULL);  //and we push a null to indicate that its the end of level 0

    while (!q.empty()){  //running a loop untill the queue is empty 
        node* temp = q.front();     //created a temporary variable and input the first element in the queue
        q.pop();    //and we pop that element from the queue

        if (temp == NULL) {  //purana level complete traversal ho chuka hai 
            cout << endl;   //if the temp have null we change to the next line
            if (!q.empty()){    //and if the queue is not empty we also push a NULL which goes to the end
                q.push(NULL);  //pushing a NULL into the queue
            }
        }

        else{   //else condition
            cout << temp->data << " ";  //here we print the data in the node
            if(temp->left){  //if the left side of node exist then push that element into the queue
                q.push(temp->left); //pushing that element into the queue
            }
            if(temp->right){  //if the right side of the node exist then push that element into the queue
                q.push(temp->right);  //pushing that element into the queue
            }   
        }
    }
}

void reverseLevelOrderTraversal(){
    //hommework hai khud se kro
}

void inOrder(node* root){   //LNR  L is go left N is node(print) R is go right
    //base case
    if (root == NULL){      //base case says that if we find a NULL then just exit out of the function 
        return;
    }

    inOrder(root->left);    //this recursive call keeps traversing to left side
    cout << root->data;     //when the recursive call fails then it prints the value of the node
    inOrder(root->right);   //this recursive call keeps traversing to the right side of the node
}

void postOrder(node* root){ //LRN  L is go left R is go right N is node(print)
    //base case
    if (root == NULL){      //base case says that if we find a NULL then just exit out of the function
        return;
    }

    postOrder(root->left);  //this recursive call keeps traversing to left side
    postOrder(root->right); //this recursive call keeps traversing to the right side of the node
    cout << root->data;     //when the recursive call fails then it prints the value of the node
}

void preOrder(node* root){  //NLR  N is node(print) L is go left R is go right
    //base case
    if (root == NULL){      //base case says that if we find a NULL then just exit out of the function
        return;
    }

    cout << root->data;     //when the recursive call fails then it prints the value of the node
    preOrder(root->left);   //this recursive call keeps traversing to left side
    preOrder(root->right);  //this recursive call keeps traversing to the right side of the node
}

void buildFromLevel(node* &root){   //this function just builds the tree level by level
    queue<node*> q;                 //created a queue 
    cout << "enter data for root";  //asking for the data
    int data;                       //data variable
    cin >> data;                    //inputing
    root = new node(data);          //root was a null pointer and now we called the node constructor inside it
    q.push(root);                   //pushing the root inside the queue
 
    while (!q.empty()){             //condition to check the empty queue
        node* temp = q.front();     //put the peek element into the queue 
        q.pop();                    //and remove that element from the queue
 
        cout << "Enter left node for: " << temp->data << endl;
        int leftData;
        cin >> leftData;            //taking the data for the left side of the root node

        if (leftData != -1){        //if the data entered is not null
            temp->left = new node(leftData);    //then call the constructor for the NULL
            q.push(temp->left);     //pushing the element into the queue
        }

        cout << "Enter right node for: " << temp->data << endl;  //asking for the data in the right 
        int rightData;  
        cin >> rightData;           //inputing the data

        if (rightData != -1){       //if the data entered is not null
            temp->right = new node(rightData);  
            q.push(temp->right);
        }
    }
    
}   

int main(){
    
    //data = 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    node* root = NULL;  //created an empty NULL ptr of type node 
    root = buildTree(root);

    cout << "Printing the tree in level Order traversal mode";
    levelOrderTraversal(root);

    return 0;
}