class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        int n=nums.size();
        int i=0;
        while(i<n)
        {
            if(nums[i]<=0)i++;
            else if(nums[i]==i+1 || nums[i]>n || nums[nums[i]-1]==nums[i])i++;
            else swap(nums[i],nums[nums[i]-1]);
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i+1)return i+1;
        }
        return n+1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna