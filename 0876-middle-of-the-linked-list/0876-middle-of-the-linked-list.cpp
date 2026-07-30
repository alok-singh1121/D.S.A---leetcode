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
#define ed endl
#define Node ListNode
#define null NULL
    ListNode* middleNode(ListNode* head) {
        Node* slow = head;
        Node* fast = head;
        while (fast != null and fast->next != null) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};