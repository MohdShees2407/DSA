class Solution {
public:
    int countPrimes(int n) 
    {
        if(n==0 || n==1)return false;
        int count=0;
        vector<bool> v(n,true);
        for(int i=2;i<n;i++)
        {
            if(v[i]==true)
            {
                count++;
                for(int j=i;j<n;j+=i)
                {
                    v[j]=false;
                }
            }
        }
        return count;        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna