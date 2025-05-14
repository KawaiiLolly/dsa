class Solution {
  public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    void dfs(Node* root, int hd, int level, map<int,pair<int,int>> &mp) {
        if(!root) return;
        if(mp.find(hd) == mp.end() || level >= mp[hd].second) {
            mp[hd] = {root->data, level};
        }
        dfs(root->left, hd-1, level+1, mp);
        dfs(root->right, hd+1, level+1, mp);
    }
    
    vector<int> bottomView(Node *root) {
        // code here
        vector<int> ans;
        if(!root)   return ans;
        map<int,pair<int,int>> mp;
        dfs(root, 0, 0, mp);
        for(auto it : mp) ans.push_back(it.second.first);
        return ans;
    }
};