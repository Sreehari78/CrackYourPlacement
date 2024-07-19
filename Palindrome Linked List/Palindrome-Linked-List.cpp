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
    bool isPalindrome(ListNode* head) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        if (head && head->next && !head->next->next)
            return head->val == head->next->val;

        bool isOdd = true;
        ListNode* hare = head;
        ListNode* tortise = head;
        ListNode* left = nullptr;

        while (hare) {
            hare = hare->next;
            isOdd = !isOdd;
        }

        hare = head;

        while (hare && hare->next) {
            hare = hare->next->next;
            tortise = tortise->next;
        }

        if (!isOdd)
            tortise = tortise->next;

        while (tortise) {
            ListNode* right = tortise->next;
            tortise->next = left;
            left = tortise;
            tortise = right;
        }

        tortise = left;

        while (head && tortise) {
            if (head->val != tortise->val)
                return false;
            head = head->next;
            tortise = tortise->next;
        }

        return true;
    }
};
