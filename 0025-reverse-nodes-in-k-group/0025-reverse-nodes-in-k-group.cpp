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
    ListNode* reverse(ListNode* head, int k) {
        ListNode* prev = nullptr;
        ListNode* curr = head;
        while (k--) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == nullptr) {
            return head;
        }
        ListNode* left = head;
        ListNode* res = nullptr;
        ListNode* prevleft = nullptr;
        ListNode* right;
        int size = k;
        while (true) {
            right = left;
            for (int i = 0; i < (size - 1); i++) {
                if (right == nullptr) {
                    break;
                } else {
                    right = right->next;
                }
            }
            if (right) {
                ListNode* nextleft = right->next;
                reverse(left, size);
                if (prevleft) {
                    prevleft->next = right;
                }
                if (res == nullptr) {
                    res = right;
                }
                prevleft = left;
                left = nextleft;
            } else {
                if (prevleft) {
                    prevleft->next = left;
                }
                if (res == nullptr) {
                    res = left;
                }
                break;
            }
        }
        return res;
    }
};