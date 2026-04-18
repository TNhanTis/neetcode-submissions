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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> prev;
        ListNode* temp=head;
        while(temp->next) {
            prev.push_back(temp);
            temp=temp->next;
        }
        if(n==prev.size()+1){
            return head->next;
        }
        if(n==1){
            prev[prev.size()-1]->next=nullptr;
            return head;
        }
        int del=prev.size()+1-n-1;
        prev[del]->next=prev[del]->next->next;
        return head;
    }
};
