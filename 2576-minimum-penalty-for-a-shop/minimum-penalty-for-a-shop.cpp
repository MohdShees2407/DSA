class Solution {
public:
    int bestClosingTime(string customers) 
    {
        int n=customers.size();
        int panelty=0;
        int idx=0;
        for(int i=0;i<n;i++)
            if(customers[i]=='Y')
            {
                panelty+=1;
            }
        int m=panelty;
        for(int i=0;i<n;i++)
        {
            if(customers[i]=='Y')
                panelty-=1;
            else if(customers[i]=='N')
                panelty+=1;
            if(m>panelty)
            {
                m=panelty;
                idx=i+1;
            }
        }    
        return idx;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna