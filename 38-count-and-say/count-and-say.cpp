class Solution {
public:
    string countAndSay(int n) 
    {
        if(n==1)return "1";

        string str=countAndSay(n-1);

        string ans="";
        int freq=1;
        char ch=str[0];
        
        for(int i=1;i<str.length();i++)
        {
            if(ch==str[i])freq++;
            else
            {
                ans+=(to_string(freq)+ch);
                freq=1;
                ch=str[i];
            }
        }
        ans+=(to_string(freq)+ch);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna