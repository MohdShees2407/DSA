class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) 
    {
        int n=arr1.size();
        int m=arr2.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            bool temp=0;
            for(int j=0;j<m;j++)
            {
                if(abs(arr1[i]-arr2[j])<=d)
                {
                    temp=1;
                    break;
                }
            }
            if(temp==0)count++;
        }
        return count;   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna