/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) 
    {
        vector<vector<int>> ans(m,vector<int>(n,-1));
        int minr=0;
        int minc=0;
        int maxr=m-1;
        int maxc=n-1;
        while(minr<=maxr && minc<=maxc)
        {
            //rignt
            for(int i=minc;i<=maxc;i++)
            {
                if(head==NULL)return ans;
                ans[minr][i]=head->val;
                head=head->next;
            }
            minr++;

            if(minr>maxr||minc>maxc)break;
            //down
            for(int i=minr;i<=maxr;i++)
            {
                if(head==NULL)return ans;
                ans[i][maxc]=head->val;
                head=head->next;
            }
            maxc--;

            if(minr>maxr||minc>maxc)break;
            //left
            for(int i=maxc;i>=minc;i--)
            {
                if(head==NULL)return ans;
                ans[maxr][i]=head->val;
                head=head->next;
            }
            maxr--;

            if(minr>maxr||minc>maxc)break;
            //up
            for(int i=maxr;i>=minr;i--)
            {
                if(head==NULL)return ans;
                ans[i][minc]=head->val;
                head=head->next;
            }
            minc++;
        }
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna