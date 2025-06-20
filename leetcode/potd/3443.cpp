class Solution
{
public:
    int maxDistance(string s, int k)
    {
        int maxDist = 0;
        int countN = 0, countE = 0, countS = 0, countW = 0;
        for (int i = 0; i < s.size(); i++)
        {
            char move = s[i];
            if (move == 'N')
                countN++;
            else if (move == 'S')
                countS++;
            else if (move == 'E')
                countE++;
            else
                countW++;
            int l = i + 1;
            int minPairs = min(countN, countS) + min(countE, countW);
            int currDist = 0;
            if (k >= minPairs)
            {
                currDist = l;
            }
            else
            {
                int baseNonConflicting = l - 2 * minPairs;
                currDist = baseNonConflicting + 2 * k;
            }
            maxDist = max(maxDist, currDist);
        }
        return maxDist;
    }
};