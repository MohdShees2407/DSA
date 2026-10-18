class Solution {
public:
    int bestClosingTime(string customers) 
    {
        int n=customers.length();
        vector<int> temp(n+1);

        int count=0;
        for(int i=0;i<n;i++)
        {
            if(customers[i]=='Y')count++;
        }
        temp[0]=count;
        for(int i=0;i<n;i++)
        {
            if(customers[i]=='Y')temp[i+1]=temp[i]-1;
            else if(customers[i]=='N')temp[i+1]=temp[i]+1;
        }
        int mini = temp[0];
        int idx = 0;
        for(int i=0;i<=n;i++)
        {
            if(mini>temp[i])
            {
                mini=temp[i];
                idx=i;
            }
        }
        return idx;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna