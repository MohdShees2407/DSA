class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) 
    {
        int n=customers.size();
        int lose=0;
        for(int i=0;i<minutes;i++)
        {
            if(grumpy[i]==1)lose+=customers[i];
        }
        int maxlose=lose;
        int i=1;
        int j=minutes;
        int idx=0;
        while(j<n)
        {
            if(grumpy[j]==1)lose+=customers[j];
            if(grumpy[i-1]==1)lose-=customers[i-1];
            if(lose>maxlose)
            {
                maxlose=lose;
                idx=i;
            }
            i++;
            j++;
        }

        for(int i=idx;i<idx+minutes;i++)
            grumpy[i]=0;

        int ans=0;
        for(int i=0;i<n;i++)
            if(grumpy[i]==0)ans+=customers[i];

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna