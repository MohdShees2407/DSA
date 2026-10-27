class Solution {
public:
    vector<string> createGrid(int m, int n) 
    {
        vector<string> ans;
        for(int i=1;i<=m;i++)
        {
            string s="";
            for(int j=1;j<=n;j++)
            {
                if(i==1 || j==n)s+='.';
                else s+='#';
            }
            ans.push_back(s);
        }
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna