/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // code here
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int s = q.size();
            vector<int> a;
            for(int i=0; i<s; i++){
                Node* temp = q.front();
                q.pop();
                if(temp->left != NULL) q.push(temp->left);
                if(temp->right != NULL) q.push(temp->right);
                a.push_back(temp->data);
            }
            ans.push_back(a);
        }
        return ans;
    }
};