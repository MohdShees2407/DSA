class Solution {
public:
    int fact(int m)
    {
        if(m==0)return 1;
        return m*fact(m-1);
    }

    string solve(string str,string ans,int k)
    {
        if(str.size()==1)
        {
            return ans+str;
        }
        // if(str.size()==0)
        // return solve(str, ans, k);

        int n = str.size();
        int idx = k/fact(n-1);
        if(k%fact(n-1)==0)idx--;

        char ch = str[idx];
        string left = str.substr(0,idx);
        string right=str.substr(idx+1);

        if(k%fact(n-1)==0) return solve(left+right,ans+ch,fact(n-1));
        else return solve(left+right,ans+ch,k%fact(n-1));
    }
    string getPermutation(int n, int k) 
    {
        string str="";
        for(int i=1;i<=n;i++)
            str+=to_string(i);
            
        string ans="";
        return solve(str,ans,k);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna