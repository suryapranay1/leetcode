class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int count =1;
        int maxi=INT_MIN;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=1;
        while(i<n-1 && i<j)
        {
            if(nums[j]-nums[i]==1 && i<n-1)
            {
                count++;
            }
            i++; 
            j++;
        }
        if(nums.size()==0)
        return 0;
        return count;
    }
};

The above code work for only positives and zeroes only
