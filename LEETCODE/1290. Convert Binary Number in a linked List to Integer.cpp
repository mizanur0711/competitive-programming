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
	int getDecimalValue(ListNode* head) {
		long long  ans = 0;
		while (head)
		{
			ans = ans * 2 + head->val;
			head = head->next;
		}
		return ans;
	}
};