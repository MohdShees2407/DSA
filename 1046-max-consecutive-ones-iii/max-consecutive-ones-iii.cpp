class Solution {
public:
    int longestOnes(vector<int>& nums, int k) 
    {
        int n=nums.size();
        int i=0,j=0;
        int flip=0;
        int maxlen=0;

        while(j<n)
        {
            if(nums[j]==1) j++;
            else
            {
                if(flip<k)
                {
                    flip++;
                    j++;
                }
                else
                {
                    maxlen=max(maxlen,j-i);

                    while(nums[i]==1) i++;
                    i++;
                    flip--;
                }
            }
        }

        maxlen=max(maxlen,j-i);
        return maxlen;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna