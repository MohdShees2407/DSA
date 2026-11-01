class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& locked, int k)
    {
        int n = nums.size();
        int count = 0;
        int swaps = 0;

        vector<int> diff(n + 1, 0);

        // Step 1: Count inversions
        for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(nums[i] > nums[j])
                {
                    swaps++;
                    diff[i]++;
                    diff[j + 1]--;
                }
            }
        }

        // Step 2: Unlock required indices
        int active = 0;

        for(int i = 0; i < n; i++)
        {
            active += diff[i];

            if(active > 0 && locked[i] == 1)
            {
                count++;
            }
        }

        // Step 3: Check unlock limit
        if(count > k) return -1;

        return count + swaps;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna