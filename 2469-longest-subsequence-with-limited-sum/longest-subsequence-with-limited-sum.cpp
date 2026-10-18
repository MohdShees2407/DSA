class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) 
    {
        int n=nums.size();
        int m=queries.size();
        vector<int> ans(m);
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++)
        {
            nums[i]+=nums[i-1];
        }
        
        for(int i=0;i<m;i++)
        {
            int len=0;
            int low=0;
            int high=n-1;
            while(low<=high)
            {
                int mid=(low+high)/2;
                if(nums[mid]>queries[i])high=mid-1;
                else
                {
                    len=mid+1;
                    low=mid+1;
                }
            }
            ans[i]=len;
        }
        return ans;

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna