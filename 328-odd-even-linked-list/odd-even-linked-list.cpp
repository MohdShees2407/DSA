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
    ListNode* oddEvenList(ListNode* head) 
    {
        if(head==NULL || head->next==NULL)return head;
        ListNode* odd=new ListNode();
        ListNode* even=new ListNode();
        ListNode* to=odd;
        ListNode* te=even;
        ListNode* temp=head;
        int count=1;
        while(temp!=NULL)
        {
            if(count%2!=0)
            {
                to->next=temp;
                to=to->next;
            }
            else
            {
                te->next=temp;
                te=te->next;
            }
            count++;
            temp=temp->next;
        }
        to->next=NULL;
        te->next=NULL;
        to->next=even->next;
        return odd->next;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna