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
        ListNode *t = head;
        int n = 0;
        while (t)
        {
            n++;
            t = t->next;
        }
        t = head;
        n = ceil(n / 2);
        while (t && n--)
        {
            t = t->next;
        }

        return t;

    }
};