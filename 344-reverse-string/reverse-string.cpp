class Solution {
public:
void solve(vector<char>& s,int i)
{
    if(s.size()%2!=0 && i==s.size()/2+1)return;
    if(s.size()%2==0 && i==s.size()/2)return;
    swap(s[i],s[s.size()-1-i]);
    solve(s,i+1);
}
    void reverseString(vector<char>& s) 
    {
        solve(s,0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna