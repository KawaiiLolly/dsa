class Solution
{
public:
    int partitionArray(vector<int> &nums, int k)
    {
        int n = nums.size();
        int count = 0;
        sort(nums.begin(), nums.end());
        int i = 0;
        while (i < n)
        {
            int start = nums[i];
            count++;
            while (i < n && nums[i] - start <= k)
                i++;
        }
        return count;
    }
};