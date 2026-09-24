class Solution {
public:
    void solve(int n, int k,vector<int>& temp,vector<vector<int>>& ans,int i)
    {
        if(k==0)
        {
            ans.push_back(temp);
            return;
        }

        if(i>n)return;

        temp.push_back(i);
        solve(n,k-1,temp,ans,i+1);
        temp.pop_back();
        
        solve(n,k,temp,ans,i+1);
    }
    vector<vector<int>> combine(int n, int k) 
    {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(n,k,temp,ans,1);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna