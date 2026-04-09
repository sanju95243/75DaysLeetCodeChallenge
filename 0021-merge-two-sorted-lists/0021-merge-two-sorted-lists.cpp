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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        // Dummy node banate hain (result list ka starting point)
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy; // pointer to build result list

        // Jab tak dono lists empty nahi hoti
        while (list1 != nullptr && list2 != nullptr) {
            
            // Chhota value wala node choose karo
            if (list1->val <= list2->val) {
                temp->next = list1;     // list1 ka node attach
                list1 = list1->next;   // list1 aage badhao
            } else {
                temp->next = list2;     // list2 ka node attach
                list2 = list2->next;   // list2 aage badhao
            }

            temp = temp->next; // result list me aage badho
        }

        // Agar koi list abhi bhi bachi hai, directly attach kar do
        if (list1 != nullptr) {
            temp->next = list1;
        } else {
            temp->next = list2;
        }

        // Dummy ka next hi actual answer hai
        return dummy->next;
    }
};