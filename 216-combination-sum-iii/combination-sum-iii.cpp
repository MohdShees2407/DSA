class Solution {
public:
    void solve(int k, int n,vector<vector<int>>& ans,vector<int>& temp,int i)
    {
        if(k==0)
        {
            if(n==0)
            ans.push_back(temp);
            return;
        }

        if(n<0 || i>9)return;

        temp.push_back(i);
        solve(k-1,n-i,ans,temp,i+1);
        temp.pop_back();
        
        solve(k,n,ans,temp,i+1);
    }
    vector<vector<int>> combinationSum3(int k, int n) 
    {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(k,n,ans,temp,1);
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna