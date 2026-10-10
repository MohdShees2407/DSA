class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int maxi=0;
        int count=0;
        for(int i=0;i<=nums.size();i++)
        {
            if(i<nums.size() && nums[i]==1)count++;
            else 
            {
                maxi=max(count,maxi);
                count=0;
            }
        }
        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna