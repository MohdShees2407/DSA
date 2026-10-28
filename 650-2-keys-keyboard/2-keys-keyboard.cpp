
class Solution {
public:
    int minSteps(int n) 
    {
        if(n==1)return 0;

        vector<bool> v(n+1,true);
        vector<int> prime;

        v[0]=v[1]=false;

        for(int i=2;i<=n;i++)
        {
            if(v[i]==1)
            {
                prime.push_back(i);

                for(int j=i*2; j<=n && j>0; j+=i)
                    v[j]=false;
            }
        }

        int sum=0;

        while(n!=1)
        {
            for(int i=0;i<prime.size();i++)
            {
                if(n%prime[i]==0)
                {
                    sum+=prime[i];
                    n/=prime[i];
                    break;
                }
            }
        }

        return sum;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna