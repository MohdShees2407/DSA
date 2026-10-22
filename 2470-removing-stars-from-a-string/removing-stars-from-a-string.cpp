class Solution {
public:
    string removeStars(string s) 
    {
        stack<char> st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='*')st.pop();
            else st.push(s[i]);
        }
        string str="";
        while(st.empty()==false)
        {
            str+=st.top();
            st.pop();
        }

        reverse(str.begin(),str.end());
        return str;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna