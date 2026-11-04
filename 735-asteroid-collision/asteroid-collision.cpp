class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) 
    {
        stack<int> st;

        for(int i=0;i<asteroids.size();i++)
        {
            int it=asteroids[i];
            bool alive=true;

            while(st.empty()==false && it<0 && st.top()>0)
            {
                if(st.top()<abs(it)) st.pop();
                else if(st.top()==abs(it))
                {
                    st.pop();
                    alive=false;
                    break;
                }
                else
                {
                    alive=false;
                    break;
                }
            }
            if(alive==true) st.push(it);
        }

        vector<int> ans;

        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna