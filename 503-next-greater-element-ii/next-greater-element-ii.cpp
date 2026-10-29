class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        
        int n=nums.size();
        vector<int> ans;
        stack<int> st;
        
        for(int i=0;i<n;i++)nums.push_back(nums[i]);

        for(int i=nums.size()-1;i>=0;i--)
        {
            while(st.empty()==false && st.top()<=nums[i])
            {
                st.pop();
            }
            if(st.empty()) ans.push_back(-1);
            else ans.push_back(st.top());
            st.push(nums[i]);
        }
        reverse(ans.begin(),ans.end());
        vector<int> a(ans.begin(),ans.begin()+n);
        return a;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna