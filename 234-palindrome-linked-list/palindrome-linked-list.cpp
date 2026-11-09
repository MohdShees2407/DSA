
class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
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

        while(pre!=NULL)
        {
            if(head->val!=pre->val)return false;
            head=head->next;
            pre=pre->next;
        }
         
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna