class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
        //dublicate linked list
        ListNode * temp=head;
        ListNode * c = new ListNode(10);
        ListNode * tempC=c;
        while(temp!=NULL)
        {
            ListNode * n = new ListNode(temp->val);
            tempC->next=n;
            tempC=tempC->next;
            temp=temp->next;
        }

        ListNode* cur=c->next;
        ListNode* pre=NULL;
        ListNode* Next=NULL;
        while(cur!=NULL)
        {
            Next=cur->next;
            cur->next=pre;
            pre=cur;
            cur=Next;
        }

        while(pre!=NULL)
        {
            if(pre->val!=head->val)return false;
            pre=pre->next;
            head=head->next;
        }
        
        return true;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna