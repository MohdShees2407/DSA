class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) 
    {
        int n=nums.size();
        bool flag=0;
        int i=0;
        int j=0;
        int sum=0;
        int minlen=nums.size()+1;
        while(j<n)
        {
            sum+=nums[j];
            while(sum>=target)
            {
                flag=1;
                minlen=min(minlen,j-i+1);
                sum-=nums[i];
                i++;
            }
            j++;
            
        }
        if(flag==1)return minlen;
        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna