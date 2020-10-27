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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* fin=NULL;
        ListNode* temp=NULL;
        ListNode* f1=fin;
        int carry=0, val=0;
        while(l1 || l2){
            int val=carry+((l1!=NULL?l1->val:0)+(l2!=NULL?l2->val:0));
            temp=new ListNode(val%10);
            carry=(val>=10?1:0);
            if(fin==NULL){
                fin=temp;
                f1=fin;
            }
            else
            {
                fin->next=temp;
                fin=fin->next;
            }
            l1=l1!=NULL?l1->next:NULL;
            l2=l2!=NULL?l2->next:NULL;
        }
        if(carry>0){
            temp=new ListNode(carry);
            fin->next=temp;
        }
        return f1;
    }
};