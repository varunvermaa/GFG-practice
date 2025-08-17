/*
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    void mirror(Node* node) {
        // code here
        if(node==NULL) return;
        mirror(node->left);
        Node* l = node->left;
        mirror(node->right);
        Node* r = node->right;
        node->left = r;
        node->right = l;
        return ;
        
        
    }
};