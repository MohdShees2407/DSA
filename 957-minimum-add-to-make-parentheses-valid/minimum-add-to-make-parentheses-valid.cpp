class Solution {
public:
    int minAddToMakeValid(string s) 
    {
        int o=0;
        int c=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==')' && o==0)c++;
            else if(s[i]=='(')o++;
            else if(s[i]==')')o--;
        }
        return o+c;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna