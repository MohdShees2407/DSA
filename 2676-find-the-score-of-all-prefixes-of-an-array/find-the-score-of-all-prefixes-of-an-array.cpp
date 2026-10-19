class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) 
    {
        int n=nums.size();
        vector<long long> conver(n);
        int maxi=nums[0];
        for(int i=0;i<n;i++)
        {
            maxi=max(nums[i],maxi);
            conver[i]=nums[i]+maxi;
        }
        for(int i=1;i<n;i++)conver[i]+=conver[i-1];
        return conver;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna