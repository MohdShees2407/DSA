class Solution {
public:
    bool isPalindrome(int x) 
    {
        int temp=x;
        long long rev=0;
        while(temp>0)
        {
            rev=rev*10+temp%10;
            temp=temp/10;
        }
        if(rev==x)return true;
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna