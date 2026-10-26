class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) 
    {
        int n=nums.size();
        int i=0;
        int j=0;
        int count=0;
        int ans=0;
        int odd=0;
        while(j<n)
        {
            if(nums[j]%2==1)
            {
                count=0;
                odd++;
            }
            while(i<=j && k==odd)
            {
                count++;
                if(nums[i++]%2!=0)odd--;
            }
            ans+=count;
            j++;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna