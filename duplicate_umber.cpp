class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        map<int, int> mp;
        int res = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for (auto it : mp)
        {
            if (it.second > 1)
                res = it.first;
        }
        return res;
    }
};