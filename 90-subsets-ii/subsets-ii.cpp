class Solution {
public:
    void helper(vector<int>& nums, vector<int> tempAns,
                vector<vector<int>>& finalAns, int idx)
    {
        if (idx == nums.size())
        {
            finalAns.push_back(tempAns);
            return;
        }

        // Include
        tempAns.push_back(nums[idx]);
        helper(nums, tempAns, finalAns, idx + 1);
        tempAns.pop_back();

        // Exclude and skip duplicates
        int next = idx + 1;

        while (next < nums.size() && nums[next] == nums[idx])
            next++;

        helper(nums, tempAns, finalAns, next);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());

        vector<vector<int>> finalAns;
        vector<int> tempAns;

        helper(nums, tempAns, finalAns, 0);

        return finalAns;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna