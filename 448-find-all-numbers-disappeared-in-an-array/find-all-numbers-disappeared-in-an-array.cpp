class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> ans;
        int i=0;
        while(i<n)
        {
            int correctIdx=nums[i]-1;
            if(nums[i]==i+1)i++;
            else if(nums[i]==nums[correctIdx])i++;
            else swap(nums[i],nums[correctIdx]);
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i+1)ans.push_back(i+1);
        }
        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna