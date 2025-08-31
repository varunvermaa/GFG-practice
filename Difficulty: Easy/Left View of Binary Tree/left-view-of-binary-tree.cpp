/*

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
 */

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        
        vector<int> ans;
        if(root==NULL) return ans;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int s = q.size();
            
            for(int i=0; i<s; i++){
                Node* t=q.front();
                q.pop();
                if(i==0) ans.push_back(t->data);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
                
            }
           
        }
        
        return ans;
        
    }
};