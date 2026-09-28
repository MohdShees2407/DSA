class Solution {
public:
    int kthGrammar(int n, int k) 
    {
        if(n==1)return 0;
        if(k%2==0)//k is even,flip
        {
            int prevAns=kthGrammar(n-1,k/2);
            if(prevAns==0)return 1;
            else return 0;
        }
        else//k is odd,k/2+1
        {
            int prevAns=kthGrammar(n-1,k/2+1);
            return prevAns;
        }

        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna