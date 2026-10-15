/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) 
    {
        ListNode * slow=head;
        ListNode * fast=head;

        bool flag=0;
        
        while(fast != NULL && fast->next !=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)return NULL;

        ListNode * temp=head;
        while(temp!=slow)
        {
            slow=slow->next;
            temp=temp->next;
        }
        return slow;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna