class Solution {
public:
    void reorderList(ListNode* head) 
    {
        //FOR LEFT MIDDLE
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* n=slow->next;
        slow->next=NULL;

        //REVERSE HALF LIST
        ListNode* pre=NULL;
        ListNode* cur=n;
        ListNode* Next=NULL;
        while(cur!=NULL)
        {
            Next=cur->next;
            cur->next=pre;
            pre=cur;
            cur=Next;
        }
        
        ListNode* temp1=head;
        ListNode* temp2=pre;
        while(temp1!=NULL  && temp2!=NULL)
        {
            temp1=temp1->next;
            head->next=temp2;
            head=head->next;
            temp2=temp2->next;
            head->next=temp1;
            head=head->next;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna