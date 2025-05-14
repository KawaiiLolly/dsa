class Solution {
  public:
    vector<int> reverseLevelOrder(Node *root) {
        // code here
        stack<Node*> st;
        queue<Node*> q;
        vector<int> ans;
        q.push(root);
        while(!q.empty()) {
            Node* curr = q.front();
            q.pop();
            st.push(curr);
            if(curr->right) q.push(curr->right);
            if(curr->left)  q.push(curr->left);
        }
        
        while(!st.empty()) {
            ans.push_back(st.top()->data);
            st.pop();
        }
        return ans;
    }
};