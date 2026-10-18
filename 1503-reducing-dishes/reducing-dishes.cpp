class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) 
    {
        int n=satisfaction.size();

        sort(satisfaction.begin(),satisfaction.end());

        vector<int> temp(n);
        for(int i=n-1;i>=0;i--)
        {
            if(i==n-1)temp[i]=satisfaction[i];
            else temp[i]=temp[i+1]+satisfaction[i];
        }

        int idx=-1;
        for(int i=0;i<n;i++)
        {
            if(temp[i]>=0)
            {
                idx=i;
                break;
            }
        }
        if(idx==-1)return 0;
        int ans=0;
        int pro=1;
        for(int i=idx;i<n;i++)
        {
            ans=ans+pro*satisfaction[i];
            pro++;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna