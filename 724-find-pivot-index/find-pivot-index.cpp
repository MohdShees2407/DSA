class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int n=nums.size();
        //prefix calculation
        vector<int> pre(n);
        for(int i=0;i<n;i++)
        {
            if(i==0)pre[i]=nums[i];
            else pre[i]=pre[i-1]+nums[i];
        }
        //suffix calculation
        for(int i=n-2;i>=0;i--)
        {
            nums[i]+=nums[i+1];
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]==pre[i])return i;
        }
        return -1;

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna