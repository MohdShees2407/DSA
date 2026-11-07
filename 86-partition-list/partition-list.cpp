
class Solution {
public:
    ListNode* partition(ListNode* head, int x) 
    {
        if(head==NULL || head->next==NULL)return head;
        ListNode* low=new ListNode();
        ListNode* high=new ListNode();
        ListNode* tl=low;
        ListNode* th=high;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            if(temp->val < x)
            {
                tl->next=temp;
                tl=tl->next;
                temp=temp->next;
            }
            else
            {
                th->next=temp;
                th=th->next;
                temp=temp->next;
            }
        }
        tl->next=NULL;
        th->next=NULL;
        tl->next=high->next;
        return low->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna