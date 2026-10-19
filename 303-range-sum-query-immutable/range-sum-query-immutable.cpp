class NumArray {
public:
    vector<int> pre;
    NumArray(vector<int>& nums) 
    {
        int n=nums.size();
        pre=vector<int>(n);
        for(int i=0;i<n;i++)
        {
            if(i==0)pre[i]=nums[i];
            else pre[i]=pre[i-1]+nums[i];
        }
    }
    
    int sumRange(int left, int right) 
    {
        if(left==0)return pre[right];
        return pre[right]-pre[left-1]; 
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna