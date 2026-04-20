/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(!head) return head;
        map<Node*,Node*> visited;
        Node* ans=new Node(head->val);
        visited[head]=ans;
        Node* temp=head->next;
        Node* cur = ans;
        while(temp){
            cur->next = new Node(temp->val);
            cur=cur->next;
            visited[temp]=cur;
            temp=temp->next;
        }
        cur->next=nullptr;
        cur=ans;
        temp=head;
        while(temp){
            if(temp->random){
                cur->random=visited[temp->random];
            }
            temp=temp->next;
            cur=cur->next;
        }
        return ans;
    }
};
