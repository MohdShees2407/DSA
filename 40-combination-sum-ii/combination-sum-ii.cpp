class Solution {
public:
    void solve(vector<int>& candidates, int target,vector<vector<int>>& ans,vector<int>& temp,int i)
    {
        if(target==0)
        {
            ans.push_back(temp);
            return;
        }

        if(i==candidates.size())
        return;

        if(candidates[i]<=target)
        {
            temp.push_back(candidates[i]);
            solve(candidates,target-candidates[i],ans,temp,i+1);
            temp.pop_back();
            while(i+1<candidates.size() && candidates[i]==candidates[i+1])
            {
                i++;
            }
        }
        solve(candidates,target,ans,temp,i+1);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
    {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        solve(candidates,target,ans,temp,0);
        return ans;  
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna