
/*
    T(n) = O(nlogn), S(n) = o(n)
*/

class Solution
{
public:
    string caseSort(string &s)
    {
        // code here
        vector<char> lower, upper;
        int n = s.length();
        for (char ch : s)
        {
            if (islower(ch))
                lower.push_back(ch);
            else
                upper.push_back(ch);
        }

        sort(lower.begin(), lower.end());
        sort(upper.begin(), upper.end());
        string ans(n, ' ');
        int lowerIDX = 0, upperIDX = 0;
        for (int i = 0; i < n; i++)
        {
            if (islower(s[i]))
                ans[i] = lower[lowerIDX++];
            else
                ans[i] = upper[upperIDX++];
        }
        return ans;
    }
};

/*
    T(n) = O(n), S(n) = o(1)
*/

class Solution
{
public:
    string caseSort(string &s)
    {
        // code here
        int n = s.length();
        int lower[26] = {0};
        int upper[26] = {0};

        for (char ch : s)
        {
            if (islower(ch))
                lower[ch - 'a']++;
            else
                upper[ch - 'A']++;
        }

        string ans(n, ' ');
        int l = 0, u = 0;
        for (int i = 0; i < n; i++)
        {
            if (islower(s[i]))
            {
                while (lower[l] == 0)
                    l++;
                ans[i] = 'a' + l;
                lower[l]--;
            }
            else
            {
                while (upper[u] == 0)
                    u++;
                ans[i] = 'A' + u;
                upper[u]--;
            }
        }
        return ans;
    }
};