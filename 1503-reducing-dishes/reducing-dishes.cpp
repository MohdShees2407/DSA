class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) 
    {
        //Sorting
        sort(satisfaction.begin(),satisfaction.end());

        int n=satisfaction.size();
        vector<int> suffix(n);
        for(int i=n-1;i>=0;i--)
        {
            if(i==n-1)
                suffix[i]=satisfaction[i];
            else
                suffix[i]=suffix[i+1]+satisfaction[i];
        }

        int count=1;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(suffix[i]>=0)
            {
                ans=ans+count*satisfaction[i];
                count++;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna