class Solution {
public:
    bool checkPerfectNumber(int num) 
    {
        int sum=0;
        for(int i=1;i<sqrt(num);i++)
        {
            if(num%i==0)sum+=i;
        }
        for(int i=2;i<=sqrt(num);i++)
        {
            if(num%i==0)sum+=num/i;
        }
        if(num==sum)return true;
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna