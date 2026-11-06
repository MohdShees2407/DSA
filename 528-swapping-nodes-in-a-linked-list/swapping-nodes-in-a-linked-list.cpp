class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) 
    {
        int n=0;
        ListNode* t=head;
        while(t!=NULL)
        {
            n++;
            t=t->next;
        }
        ListNode* a=head;
        ListNode* b=head;
        
        for(int i=1;i<k;i++)a=a->next;
        for(int i=1;i<n-k+1;i++)b=b->next;
        int temp=a->val;
        a->val=b->val;
        b->val=temp;
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna