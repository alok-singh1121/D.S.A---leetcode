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
#define ed endl
#define Node ListNode
#define null NULL
    ListNode *detectCycle(ListNode *head) {
        Node* slow=head;
        Node* fast=head;
        if(head==null||head->next==null){
           return null;
        }
        while(fast!=null and fast->next!=null){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                slow=head;
                while(slow!=fast){
                    slow=slow->next;
                    fast=fast->next;
                }
                return slow;
               
            }        
        }
        return null;
        
    }
};