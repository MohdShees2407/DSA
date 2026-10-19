class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) 
    {
        int m=bookings.size();
        vector<int> ans(n,0);

        
            for(int j=0;j<m;j++)
            {
                ans[bookings[j][0]-1]+=bookings[j][2];
                if(bookings[j][1]<n)ans[bookings[j][1]]-=bookings[j][2];
            }
        for(int i=1;i<n;i++)ans[i]+=ans[i-1];
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna