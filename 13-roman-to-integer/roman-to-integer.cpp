class Solution {
public:
    int romanToInt(string s) 
    {
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='M')ans=ans+1000;
            else if(s[i]=='D')ans=ans+500;
            else if(s[i]=='C')ans=ans+100;
            else if(s[i]=='L')ans=ans+50;
            else if(s[i]=='X')ans=ans+10;
            else if(s[i]=='V')ans=ans+5;
            else if(s[i]=='I')ans=ans+1;
            
            if((s[i]=='I'&&s[i+1]=='V')||(s[i]=='I'&&s[i+1]=='X'))ans=ans-2;
            if((s[i]=='X'&&s[i+1]=='L')||(s[i]=='X'&&s[i+1]=='C'))ans=ans-20;
            if((s[i]=='C'&&s[i+1]=='D')||(s[i]=='C'&&s[i+1]=='M'))ans=ans-200;
        }
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna