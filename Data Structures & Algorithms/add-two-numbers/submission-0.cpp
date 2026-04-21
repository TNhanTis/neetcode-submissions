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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode();
        int ex=0;
        ListNode* run=ans;
        while(l1&&l2){
            ListNode* temp=new ListNode();
            temp->val=(l1->val + l2->val+ex)%10;
            ex=(l1->val + l2->val + ex)/10;
            run->next=temp;
            run=run->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1){
            ListNode* temp=new ListNode();
            temp->val=(l1->val +ex)%10;
            ex=(l1->val + ex)/10;
            run->next=temp;
            run=run->next;
            l1=l1->next;
        }
        while(l2){
            ListNode* temp=new ListNode();
            temp->val=(l2->val +ex)%10;
            ex=(l2->val + ex)/10;
            run->next=temp;
            run=run->next;
            l2=l2->next;
        }
        if(ex!=0) {
            run->next=new ListNode(1);
        }
        return ans->next;
    }
};
