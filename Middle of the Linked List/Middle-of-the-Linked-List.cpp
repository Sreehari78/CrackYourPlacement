/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };'
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* hare = head;
        ListNode* tortise = head;

        while(hare && hare -> next) {
            hare = hare -> next -> next;
            tortise = tortise -> next;
        }

        return tortise;

    }
};
