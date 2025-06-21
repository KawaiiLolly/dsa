class Solution
{
public:
    int minimumDeletions(string word, int k)
    {
        unordered_map<char, int> freq;
        for (char ch : word)
            freq[ch]++;
        vector<int> freqList;
        for (auto &[_, count] : freq)
        {
            freqList.push_back(count);
        }
        int ans = INT_MAX;
        int maxFreq = *max_element(freqList.begin(), freqList.end());
        for (int i = 1; i <= maxFreq; i++)
        {
            int del = 0;
            for (int f : freqList)
            {
                if (f < i)
                    del += f;
                else if (f > i + k)
                    del += f - (i + k);
            }
            ans = min(ans, del);
        }

        return ans;
    }
};