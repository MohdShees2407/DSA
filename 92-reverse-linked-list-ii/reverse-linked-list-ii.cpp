class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        if(head==NULL || head->next==NULL || left==right)return head;
        
        ListNode* a=NULL;
        ListNode* b=NULL;
        ListNode* c=NULL;
        ListNode* d=NULL;
        ListNode* temp=head;
        int n=1;

        while(temp!=NULL)
        {
            if(n==left-1)a=temp;
            if(n==left)  b=temp;
            if(n==right) c=temp;
            if(n==right+1) d=temp;
            temp=temp->next;
            n++;
        }
        if(a!=NULL)a->next=NULL;
        c->next=NULL;

        ListNode* pre=NULL;
        ListNode* cur=b;
        ListNode* Next=NULL;
        while(cur!=NULL)
        {
            Next=cur->next;
            cur->next=pre;
            pre=cur;
            cur=Next;
        }

        c=pre;
        if(a!=NULL)a->next=c;
        b->next=d;
        if(a!=NULL)return head;
        return c;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna