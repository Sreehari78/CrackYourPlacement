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
    bool hasCycle(ListNode *head) {
        ListNode* hare = head;
        ListNode* tortise = head;

        while(hare && hare -> next) {
            hare = hare -> next -> next;
            tortise = tortise -> next;
            if(hare == tortise) return true;
        }

        return false;
    }
};
