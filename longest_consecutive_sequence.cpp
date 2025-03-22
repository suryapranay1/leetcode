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

The above code work for only positives and zeroes only.

the below code works for every count update and gives longest consecutive sequence if it contains duplicates,zeroes,ones,negatives also.

class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            int n = nums.size();
            if (n == 0) return 0; // Fix: Handle empty input early
    
            sort(nums.begin(), nums.end());
            int count = 1;
            int maxi = 1;
    
            int i = 0;
            int j = 1;
            while (i<n-1 && j<n) { // Fix: Proper loop condition
                if (nums[j] == nums[i]) { // Fix: Skip duplicates
                i++;
                    j++;
                    continue;
                }
                if (nums[j] - nums[i] == 1) { // Consecutive element found
                    count++;
                    maxi = max(maxi, count);
                } else {  
                     // Fix: Update maxi before resetting
                    count = 1; // Reset count for new sequence
                }
                i++; // Move i to j for next comparison
                j++;
            }
            return max(maxi, count); // Ensure final max is considered
        }
    };
    
