class Solution {
public:
    bool palindrome(string& s,int i,int j)
    {
        while(i<j)
        {
            if(s[i]!=s[j])return false;
            i++;
            j--;
        }
        return true;
    }
    void solve(int i,vector<string>& temp,vector<vector<string>>& ans,string& s)
    {
        if(i>=s.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int j=i;j<s.size();j++)
        {
            if(palindrome(s,i,j)==true)
            {
                temp.push_back(s.substr(i,j-i+1));
                solve(j+1,temp,ans,s);
                temp.pop_back();
            }
        }

        

    }
    vector<vector<string>> partition(string s) 
    {
        vector<vector<string>> ans;
        vector<string> temp;
        solve(0,temp,ans,s);
        return ans;

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna