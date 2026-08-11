// Last updated: 8/11/2026, 3:38:59 PM
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
13    ListNode* mergeNodes(ListNode* head) {
14        ListNode* res = NULL;
15        ListNode* temp = NULL;
16        int sum = 0;
17        int zero = 0;
18        head = head -> next;
19        while (head != NULL) {
20            if (head->val == 0) {
21                ListNode* newNode = new ListNode(sum);
22                if (res == NULL) {
23                    res = newNode;
24                    temp = newNode;
25                } else {
26                    temp->next = newNode;
27                    temp = newNode;
28                }
29                sum = 0;
30            } 
31            else {
32                sum += head->val;
33            }
34            head = head->next;
35        }
36        return res;
37    }
38};