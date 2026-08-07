// Last updated: 8/7/2026, 3:46:58 PM
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
14        if (head == NULL) {
15            return head;
16        }
17
18        while (head != NULL && head->next != NULL &&
19               head->val == head->next->val) {
20            int x = head->val;
21
22            while (head != NULL && head->val == x) {
23                head = head->next;
24            }
25        }
26
27        if (head == NULL) {
28            return head;
29        }
30
31        ListNode* temp = head;
32
33        while (temp->next != NULL && temp->next->next != NULL) {
34            if (temp->next->val == temp->next->next->val) {
35                int x = temp->next->val;
36
37                while (temp->next != NULL && temp->next->val == x) {
38                    temp->next = temp->next->next;
39                }
40            }
41            else{
42                temp = temp -> next;
43            }
44        }
45        return head;
46    }
47};