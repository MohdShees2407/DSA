class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> pre(n);
        vector<int> suf(n);
        vector<int> ans(n);
        //prefix product
        for(int i=0;i<n;i++)
        {
            if(i==0)pre[i]=1;
            else pre[i]=pre[i-1]*nums[i-1];
        }
        //suffix product
        for(int i=n-1;i>=0;i--)
        {
            if(i==n-1)suf[i]=1;
            else suf[i]=suf[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++)
        {
            ans[i]=suf[i]*pre[i];
        }
        return ans;




        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna