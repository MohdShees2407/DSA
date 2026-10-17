class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int len=nums.size();
        int i=0;
        while(i<len)
        {
            int currectIdx=nums[i];
            if(nums[currectIdx]==nums[i])return nums[i];
            else swap(nums[i],nums[currectIdx]);
        }
        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna