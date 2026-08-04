// Last updated: 8/4/2026, 2:52:32 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    ListNode* deleteDuplicates(ListNode* head) {
14
15        if (head == NULL) {
16            return head;
17        }
18
19        ListNode* temp = head;
20        while (temp != NULL && temp->next != NULL) {
21            while (temp != NULL && temp->next != NULL && temp->val == temp->next->val) {
22                temp->next = temp->next->next;
23            }
24            temp = temp->next;
25        }
26        return head;
27    }
28};