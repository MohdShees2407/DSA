class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int n=nums.size();
        int k=0;
        if(n==1)return 1;

        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                nums[k]=nums[i];
                k++;
            }
            else if(nums[i-1]!=nums[i])
            {
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna