class Solution {
public:
    bool isValid(string s) 
    {
        stack<int> st;
        int i=0;
        if(s.size()%2!=0)return false;
        for(int i=0;i<s.size();i++)
        {
            
            if(s[i]=='(' ||s[i]=='[' ||s[i]=='{')st.push(s[i]);
            else if(!st.empty() and s[i]==')' and st.top()=='(')st.pop();
            else if(!st.empty() and s[i]==']' and st.top()=='[')st.pop();
            else if(!st.empty() and s[i]=='}' and st.top()=='{')st.pop();
            else if(s[i]==')' ||s[i]==']' ||s[i]=='}')return false;
        }
        if(st.empty())return true;
        return false;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna