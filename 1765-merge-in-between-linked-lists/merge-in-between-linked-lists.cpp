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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) 
    {
        ListNode* slow=list1;
        ListNode* fast=list1;

        for(int i=1;i<=b-a+2;i++)fast=fast->next;
        for(int i=1;i<a;i++)
        {
            slow=slow->next;
            fast=fast->next;
        }
        
        ListNode* temp=list2;
        while(temp->next!=NULL)temp=temp->next;
        temp->next=fast;
        slow->next=list2;
        return list1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna