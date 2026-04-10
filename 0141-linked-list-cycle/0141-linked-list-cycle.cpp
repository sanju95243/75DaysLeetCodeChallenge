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
    bool hasCycle(ListNode *head) {
        
        // Edge case: empty list
        if (head == nullptr)
            return false;

        ListNode* slow = head; // moves 1 step
        ListNode* fast = head; // moves 2 steps

        while (fast != nullptr && fast->next != nullptr) {
            
            slow = slow->next;          // move 1 step
            fast = fast->next->next;    // move 2 steps

            // If they meet → cycle exists
            if (slow == fast)
                return true;
        }

        // If fast reaches end → no cycle
        return false;
    }
};