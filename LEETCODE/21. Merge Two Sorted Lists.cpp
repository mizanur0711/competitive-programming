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
        ListNode *ans = new ListNode(0);
        ListNode *temp = ans;
        while (list1 || list2)
        {

            if (list1 != NULL && list2 != NULL)
            {
                cout << 1 << " ";
                if (list1->val < list2->val )
                {
                    cout << "l1>l2" << " ";
                    temp->next = list1;
                    list1 = list1->next;
                    temp = temp->next;
                }
                else if (list1->val == list2->val )
                {
                    cout << "eql" << " ";
                    temp->next = list1;
                    list1 = list1->next;
                    temp = temp->next;
                }
                else if (list1->val > list2->val && list2 != NULL)
                {
                    cout << "l1<l2" << " ";
                    temp->next = list2;
                    list2 = list2->next;
                    temp = temp->next;
                }
            }
            else if (list1 == NULL)
            {
                cout << 2 << " ";
                temp->next = list2;
                list2 = list2->next;
                temp = temp->next;
            }
            else
            {
                cout << 3 << " ";
                temp->next = list1;
                list1 = list1->next;
                temp = temp->next;
            }

        }



        return ans->next;
    }
};