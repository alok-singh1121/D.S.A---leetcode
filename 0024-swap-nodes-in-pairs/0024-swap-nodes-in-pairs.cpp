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
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* left = head;
        ListNode* right = head->next;
        ListNode* prevleft = NULL;
        ListNode* res = right;
        while (left != NULL && right != NULL) {
            ListNode* next = right->next;
            right->next = left;
            left->next = next;
            if (prevleft != NULL)
                prevleft->next = right;
            prevleft = left;
            left = next;           
            if (left == NULL || left->next == NULL)
                break;

            right = left->next;
        }

        return res;
    }
};    