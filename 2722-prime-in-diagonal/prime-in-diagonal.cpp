class Solution {
public:
    bool prime(int n)
    {
        if(n==1)return false;
        for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)return false;
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) 
    {
        int n=nums.size();
        int maxPrime=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if((i==j || j==n-i-1) && prime(nums[i][j])==1)maxPrime=max(maxPrime,nums[i][j]);
            }
        }
        return maxPrime;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna