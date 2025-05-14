class Solution {
  public:
    // Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root) {
        // Your Code here
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
                if(i==levelSize-1)                    ans.push_back(curr->data);
                if(curr->left != nullptr)   q.push(curr->left);
                if(curr->right != nullptr)  q.push(curr->right);
            }
        }
        return ans;
    }
};
