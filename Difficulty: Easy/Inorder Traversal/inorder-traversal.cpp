/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> ans;
        inor(ans, root);
        return ans;
        
    }
    
    void inor(vector<int>& ans, Node* root){
        if(root == NULL) return;
        inor(ans, root->left);
        ans.push_back(root->data);
        inor(ans, root->right);
        
    }
};