class Solution {
public:
    int minMoves(vector<int>& nums) 
    {
        int n=nums.size();
        int m=nums[0];
        for(int i=1;i<n;i++)
        {
            m=max(nums[i],m);
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            count=count+m-nums[i];
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna