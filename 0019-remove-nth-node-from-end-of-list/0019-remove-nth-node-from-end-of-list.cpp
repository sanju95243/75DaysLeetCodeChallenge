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
        
        // Dummy node (important for edge cases)
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* fast = dummy;
        ListNode* slow = dummy;

        // 🔹 Step 1: Move fast n+1 steps ahead
        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }

        // 🔹 Step 2: Move both until fast reaches end
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // 🔹 Step 3: Delete nth node
        ListNode* delNode = slow->next;
        slow->next = slow->next->next;

        delete delNode; // free memory (optional in LeetCode)

        return dummy->next;
    }
};