class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        vector<int> ans;
        if(root == nullptr) return ans;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()) {
            int levelSize = q.size();
            for(int i=0; i<levelSize;i++) {
                Node* curr = q.front();
                q.pop();
                if(i==0)                    ans.push_back(curr->data);
                if(curr->left != nullptr)   q.push(curr->left);
                if(curr->right != nullptr)  q.push(curr->right);
            }
        }
        return ans;
    }
};