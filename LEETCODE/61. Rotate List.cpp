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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head->next == NULL || k == 0)
        {
            return head;
        }

        int len = 1;
        ListNode *newhead, *tail;
        tail = head;
        while (tail->next)
        {
            len++;
            tail = tail->next;
        }
        tail->next = head;

        if (k %= len)
        {
            for (int i = 0; i < len - k; i++)
            {
                tail = tail->next;
            }
        }
        newhead = tail->next;
        tail->next = NULL;
        return newhead;



    }
};