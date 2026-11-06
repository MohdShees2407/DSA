class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode* merge=new ListNode();
        ListNode* temp=merge;
        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val > list2->val)
            {
                temp->next=list2;
                temp=temp->next;
                list2=list2->next;
            }
            else
            {
                temp->next=list1;
                temp=temp->next;
                list1=list1->next;
            }
        }
        if(list1!=NULL) temp->next=list1;
        else if(list2!=NULL)temp->next=list2;
        return merge->next;
    }
    ListNode* sort(ListNode* head)
    {
        if(head==NULL || head->next==NULL)return head;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* a=head;
        ListNode* b=slow->next;
        slow->next=NULL;
        
        a=sort(a);
        b=sort(b);
        return mergeTwoLists(a,b);
    }
    ListNode* sortList(ListNode* head) 
    {
     return sort(head);   
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna