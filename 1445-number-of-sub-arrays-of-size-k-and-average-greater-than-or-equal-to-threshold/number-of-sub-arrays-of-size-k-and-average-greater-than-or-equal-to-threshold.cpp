class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) 
    {
        int n=arr.size();
        float sum=0;
        int count=0;
        for(int i=0;i<k;i++)
        {
            sum+=arr[i];
        }
        if(sum/k >= threshold)count++;
        int i=1;
        int j=k;
        while(j<n)
        {
            sum=sum+arr[j]-arr[i-1];
            if(sum/k >= threshold)count++;
            i++;
            j++;
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna