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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if (head == nullptr) {
            return nullptr;
        }
        if (left == right) {
            return head;
        }
        ListNode* t = head;
        ListNode* before = nullptr;
        int pos = 1;
        while (pos < left) {
            before = t;
            t = t->next;
            pos++;
        }        
        ListNode* cur = t;
        ListNode* prev = nullptr;
        int times = right - left + 1;
        while (times--) {
            ListNode* nex = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nex;
        }
        t->next = cur;
        if (before != nullptr) {
            before->next = prev;
            return head;
        }      
        return prev;
    }
};