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
    ListNode* reorder(ListNode* head, bool takeHead){
        if(!head) return head;
        if(!head->next) return head;
        if(takeHead){
            ListNode* temp=head;
            temp->next=reorder(head->next,false);
            return temp;
        }
        else{
            ListNode* temp=head;
            ListNode* pre=temp;
            while(temp->next) {
                pre=temp;
                temp=temp->next;
            }
            pre->next=nullptr;
            temp->next=reorder(head,true);
            return temp;
        }
    }
    void reorderList(ListNode* head) {
        if(head){
            head->next=reorder(head->next,false);
        }
    }
};
