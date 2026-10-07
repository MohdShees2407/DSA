class Solution {
public:
    string removeOuterParentheses(string s) 
    {
        int o=0;
        int c=0;
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' && o==0)
            {
                o++;
            }
            else if(s[i]=='(')
            {
                o++;
                ans=ans+'(';
            }
            else if(s[i]==')')
            {
                o--;
                if(o!=0)ans=ans+')';
            }
        }
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna