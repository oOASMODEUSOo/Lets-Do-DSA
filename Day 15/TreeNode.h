#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class TreeNode {
    public:
        T data; // To store data
        vector<TreeNode<T>*> children; // To store children for each node
        
        TreeNode(T data) { // Constructor to initialize data
            this->data = data;
}
};
