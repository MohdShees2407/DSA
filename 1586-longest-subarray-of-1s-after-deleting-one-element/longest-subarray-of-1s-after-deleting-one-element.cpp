class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
        int n=nums.size();
        int zeroPos=-1;
        int i=0;
        int j=0;
        int maxlen=0;
        int count=0;
        while(j<n)
        {
            int prev=zeroPos;
            if(nums[j]==0)
            {
                count++;
                zeroPos=j;
            }
            if(count<=1)j++;
            else 
            {
                maxlen=max(maxlen,j-i);
                i=prev+1;
                count--;
                j++;
            }
        }
        maxlen=max(maxlen,j-i);
        return maxlen-1;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna