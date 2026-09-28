class Solution {
public:
    int maxDepth(string s) 
    {
        int o=0;
        int maxo=0;
        for(int i=0;i<s.length();i++)
        {

            if(s[i]=='(')o++;
            if(maxo<o)maxo=o;
            else if(s[i]==')')o--;
        }
        return maxo;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna