/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}
*/

class Solution {
  public:
  
    int dia_height(Node* root, int &d){
        if(root==NULL) return 0;
        int lsh = dia_height(root->left, d);
        int rsh = dia_height(root->right, d);
        d = max(lsh+rsh, d);
        return max(lsh, rsh)+1;
    }
  
    int diameter(Node* root) {
        // Your code here
        int d= INT_MIN;
        dia_height(root, d);
        return d;
    }
};