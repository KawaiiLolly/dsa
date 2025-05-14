class Solution {
  public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    void dfs(Node* root, int hd, int level, map<int,pair<int,int>> &topNodes) {
        if(!root) return;
        if(topNodes.find(hd) == topNodes.end() || topNodes[hd].second > level) {
            topNodes[hd] = {root->data, level};
        }
        dfs(root->left, hd-1, level+1, topNodes);
        dfs(root->right, hd+1, level+1, topNodes);
    }
    
    vector<int> topView(Node *root) {
        // code here
        vector<int> ans;
        if(!root)   return ans;
        map<int,pair<int,int>> topNodes;
        dfs(root, 0, 0, topNodes);
        for(auto it : topNodes) ans.push_back(it.second.first);
        return ans;
    }
};