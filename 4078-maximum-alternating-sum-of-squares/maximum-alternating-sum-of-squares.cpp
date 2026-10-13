class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) 
    {
        vector<int> temp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)temp.push_back(-nums[i]);
            else temp.push_back(nums[i]);
        }
        sort(temp.begin(),temp.end());
        int n=nums.size();
        long long ans=0;

        for(int i=0;i<n;i++)
        {
            if(i<n/2)ans=ans-temp[i]*temp[i];
            else ans=ans+temp[i]*temp[i];
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna