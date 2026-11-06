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
        ListNode* temp=head;
        int len=0;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
        temp=head;
        ListNode* a=head;
        ListNode* b=head;
        if(len%2!=0)
        {
            for(int i=1;i<len/2;i++)temp=temp->next;
            b=temp->next;
            temp->next=NULL;
        }
        else 
        {
            for(int i=1;i<(len/2)-1;i++)temp=temp->next;
            b=temp->next;
            temp->next=NULL;
        }
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