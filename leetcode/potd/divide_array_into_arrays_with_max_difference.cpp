class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=0; i<n;i+=3) {
            int a = nums[i], b = nums[i+1], c = nums[i+2];
            if(c-a > k) return {};
            ans.push_back({a,b,c});
        }
        return ans;
    }
};