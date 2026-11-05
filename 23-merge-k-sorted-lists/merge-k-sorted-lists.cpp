
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

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        
        if(lists.size()==0)return NULL;
        while(lists.size()>1)
        {
            ListNode* a=lists[lists.size()-1];
            lists.pop_back();

            ListNode* b=lists[lists.size()-1];
            lists.pop_back();

            ListNode* ans=mergeTwoLists(a,b);
            lists.push_back(ans);
        }
        return lists[0];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna