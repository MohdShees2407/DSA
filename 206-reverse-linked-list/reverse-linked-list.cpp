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
    ListNode* reverseList(ListNode* head) 
    {
        if(head==NULL or head->next==NULL)
        {
            return head;
        }
        ListNode* pre=NULL;
        ListNode* cur=head;
        ListNode* n=head->next;
        while(cur!=NULL)
        {
            cur->next=pre;
            pre=cur;
            cur=n;
            if(n!=NULL)n=n->next;
        }
        return pre;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna