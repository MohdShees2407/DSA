class Solution {
public:
    int smallestIndex(vector<int>& nums) 
    {
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            int sum=0;
            while(nums[i]>0)
            {
                sum = sum + nums[i]%10;
                nums[i]=nums[i]/10;
            }
            if(i==sum)return i;
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna