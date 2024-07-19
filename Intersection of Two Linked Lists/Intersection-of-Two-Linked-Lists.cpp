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
    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        
        ListNode* ptr1 = headA;
        ListNode* ptr2 = headB;
        int count1 = 0, count2 = 0;

        while (ptr1->next) {
            ptr1 = ptr1->next;
            count1++;
        }

        while (ptr2->next) {
            ptr2 = ptr2->next;
            count2++;
        }

        while (count1 > count2) {
            headA = headA->next;
            count1--;
        }

        while (count2 > count1) {
            headB = headB->next;
            count2--;
        }

        while (headA) {
            if (headA == headB)
                return headA;

            headA = headA->next;
            headB = headB->next;
        }
        return nullptr;
    }
};
