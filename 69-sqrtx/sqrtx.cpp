class Solution {
public:
    int mySqrt(int x) 
    {
        int low = 0;
        int high = x;
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            long long m = (long long)mid;    
            long long xx = (long long)x;    
            if(m*m==xx)    return mid;
            else if(m*m>xx)  high=mid-1;
            else if(m*m<xx)  low=mid+1;
        }
        return high;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna