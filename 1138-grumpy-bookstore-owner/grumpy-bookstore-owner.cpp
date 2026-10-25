class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) 
    {
        int n=customers.size();
        
        int lose=0;
        int maxIdx=0;
        
        for(int k=0;k<minutes;k++)
        {
            if(grumpy[k]==1)lose+=customers[k];
        }

        int maxlose=lose;
        int i=1;
        int j=minutes;
        while(j<n)
        {
            if(grumpy[j]==1)lose=lose+customers[j];
            if(grumpy[i-1]==1)lose=lose-customers[i-1];
            if(maxlose<lose)
            {
                maxlose=lose;
                maxIdx=i;
            }
            i++;
            j++;
        }
        for(int k=maxIdx;k<maxIdx+minutes;k++)
        {
            grumpy[k]=0;
        }
        int ans=0;
        for(int k=0;k<n;k++)
        {
            if(grumpy[k]==0)ans+=customers[k];
        }
        return ans;

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna