// Last updated: 8/13/2026, 2:51:36 PM
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
13    vector<int> nextLargerNodes(ListNode* head) {
14
15        ListNode* temp = head;
16        vector<int> res;
17
18        while (head != NULL) {
19            int value = head->val;
20
21            while (temp != NULL && temp->val <= value) {
22                temp = temp->next;
23            }
24
25            if (temp == NULL) {
26                res.push_back(0);
27            } else {
28                res.push_back(temp->val);
29            }
30            head = head->next;
31            temp = head;
32        }
33        return res;
34    }
35};