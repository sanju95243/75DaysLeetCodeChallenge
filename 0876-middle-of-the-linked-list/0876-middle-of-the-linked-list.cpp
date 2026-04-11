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
    ListNode* middleNode(ListNode* head) {
        
        ListNode* slow = head; // moves 1 step
        ListNode* fast = head; // moves 2 steps

        // jab tak fast end tak na pahunch jaye
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;         // 1 step
            fast = fast->next->next;   // 2 steps
        }

        // slow middle pe hoga
        return slow;
    }
};