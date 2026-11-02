class Solution {
public:
    int evalRPN(vector<string>& tokens) 
    {
        stack<int> st;
        int n=tokens.size();
        for(int i=0;i<n;i++)
        {
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/")
            {
                int b=(st.top());
                st.pop();
                int a=(st.top());
                st.pop();
                if(tokens[i]=="+")st.push(a+b);
                else if(tokens[i]=="-")st.push(a-b);
                else if(tokens[i]=="*")st.push(a*b);
                else if(tokens[i]=="/")st.push(a/b);
            }
            else st.push(stoi(tokens[i]));
        }
        return st.top();
        
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna