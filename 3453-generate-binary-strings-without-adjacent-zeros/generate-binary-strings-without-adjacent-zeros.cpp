class Solution {
public:
    void solve(int n, string temp, vector<string>& ans)
    {
        if(n == 0)
        {
            ans.push_back(temp);
            return;
        }

        // Add 1
        solve(n - 1, temp + "1", ans);

        // Add 0 if last character is not 0
        if(temp.size()==0 || temp[temp.size() - 1] == '1')
        {
            solve(n - 1, temp + "0", ans);
        }
    }

    vector<string> validStrings(int n)
    {
        vector<string> ans;
        solve(n, "", ans);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna