class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {
        if(head==NULL || head->next==NULL)return head;
        ListNode* cur=head;
        ListNode* pre=NULL;
        ListNode* Next=NULL;
        while(cur!=NULL)
        {
            Next=cur->next;
            cur->next=pre;
            pre=cur;
            cur=Next;
        }
        return pre;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna