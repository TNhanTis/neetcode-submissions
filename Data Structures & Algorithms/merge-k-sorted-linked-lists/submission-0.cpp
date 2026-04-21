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
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;
        ListNode* ans;
        if(list1->val<=list2->val) {
            ans=list1;
            list1=list1->next;
        }
        else{
            ans=list2;
            list2=list2->next;
        }
        ListNode* temp=ans;
        while(list1 && list2){
            if(list1 && list1->val<=list2->val){
                temp->next=list1;
                list1=list1->next;
            }
            else{
                temp->next=list2;
                list2=list2->next;
            }
            temp=temp->next;
        }
        if(list1){
            temp->next=list1;
        }
        if(list2){
            temp->next=list2;
        }
        return ans;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0) return nullptr;
        ListNode* ans=nullptr;
        for(int i=0;i<lists.size();i++){
            ans=mergeTwoLists(ans,lists[i]);
        }
        return ans;
    }
};
