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
    ListNode* rotateRight(ListNode* head, int k) 
    {
        if(head==NULL || head->next==NULL)return head;

        ListNode* temp=head;
        ListNode* tail =head;
        int len=1;
        while(tail->next!=NULL)
        {
            len++;
            tail=tail->next;
        }

        k=k%len;
        if(k==0)return head;
        for(int i=1;i<len-k;i++) temp=temp->next;
        
        tail->next=head;
        head=temp->next;
        temp->next=NULL;
        return head;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna