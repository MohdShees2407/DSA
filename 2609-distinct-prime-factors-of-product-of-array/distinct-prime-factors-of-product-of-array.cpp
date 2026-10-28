class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) 
    {
        int n=nums.size();

        int mx=INT_MIN;
        for(int i=0;i<n;i++)mx=max(mx,nums[i]);

        vector<bool> v(mx+1,true);
        vector<int> prime;
        if(mx+1>0)v[0]=0;
        if(mx+1>1)v[1]=0;
        for(int i=2;i<=mx;i++)
        {
            if(v[i]==true)
            {
                prime.push_back(i);
                for(int j=i*2;j<=mx;j+=i)
                {
                    v[j]=false;
                }
            }
        }
        int count=0;
        int p=prime.size();
        vector<bool> a(p,0);
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(nums[j]%prime[i]==0)a[i]=1;
            }
        }
        
            for(int j=0;j<p;j++)
            {
                if(a[j]==1)count++;
            }
            return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna