class Solution {
public:
    int minInsertions(string s) {
        int open=0;
        int ans=0;
        char ch;
        for(int i=0; i<s.size(); i++){
            ch=s[i];
            if(ch=='(')
            {
                open++;
            }
            else
            {
                if(open==0)
                {
                    if(i+1 <s.size() && s[i+1]==')')
                    {
                        ans++;
                        i++;
                    }
                    else
                    {
                        ans+=2;
                    }
                }
                else
                {
                    if(i+1 <s.size() && s[i+1]==')')
                    {
                        open--;
                        i++;
                    }
                    else
                    {
                        open--;
                        ans++;
                    }
                }
            }
        }
        return ans+open*2;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna