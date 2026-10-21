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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        
        ListNode *dummy=new ListNode();
        ListNode *temp=dummy;
        while(list1!=NULL and list2!=NULL)
        {
            if(list1->val <= list2->val)
            {
                temp->next=list1;
                temp =temp->next;
                list1=list1->next;
            }
            else{
                temp->next=list2;
                temp =temp->next;
                list2=list2->next;
            }
        }
        if(list1!=NULL)
        {
            temp->next=list1;
            temp =temp->next;
            list1=list1->next;
        }
        if(list2!=NULL)
        {
            temp->next=list2;
            temp =temp->next;
            list2=list2->next;
        }
        return dummy->next;
    }

};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna