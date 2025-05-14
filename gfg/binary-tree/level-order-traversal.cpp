class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // Your code here
        if(root == nullptr) return {};
        queue<Node* > q;
        q.push(root);
        int currLevel = 0;
        vector<vector<int>> ans;
        while(!q.empty()) {
            int len = q.size();
            ans.push_back({});
            for(int i=0; i<len; i++) {
                Node* node = q.front();
                q.pop();
                ans[currLevel].push_back(node->data);
                if(node->left != nullptr)   q.push(node->left);
                if(node->right != nullptr)  q.push(node->right);
            }
            currLevel++;
        }
        return ans;
    }
};