class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int n = nums.size();
        int res = n * (n + 1) / 2;
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            result = result + nums[i];
        }
        return res - result;
    }
};