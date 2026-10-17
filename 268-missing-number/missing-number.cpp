class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        int i=0;
        while(i<n)
        {
            int cur=nums[i];
            if(cur==i || nums[i]==n)i++;
            else swap(nums[i],nums[cur]);
        }
        for(int idx=0;idx<n;idx++)
        {
            if(nums[idx]!=idx)return idx;
        }
        return n;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna