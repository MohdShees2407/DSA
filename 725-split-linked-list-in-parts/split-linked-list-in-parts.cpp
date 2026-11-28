class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) 
    {
        int n=0;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            n++;
            temp=temp->next;
        }
        vector<ListNode*> ans(k);

        int rem=n%k;
        temp=head;
        int idx=0;
        while(temp!=NULL)
        {
            if(rem>0)
            {
                ListNode* t=temp;
                ans[idx]=t;
                idx++;
                for(int i=1;i<(n/k)+1;i++)
                    t=t->next;
                    temp=t->next;
                    t->next=NULL;
                rem--;
            }
            else
            {
                ListNode* t=temp;
                ans[idx]=t;
                idx++;
                for(int i=1;i<(n/k);i++)
                    t=t->next;
                    temp=t->next;
                    t->next=NULL;
            }
            
       }
       return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna