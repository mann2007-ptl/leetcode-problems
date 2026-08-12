// Last updated: 8/12/2026, 3:31:05 PM
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
13    ListNode* reverseList(ListNode* head) {
14        ListNode* prev = NULL;
15        ListNode* curr = head;
16
17        while (curr != NULL) {
18            ListNode* currNext = curr->next;
19            curr->next = prev;
20            prev = curr;
21            curr = currNext;
22        }
23        return prev;
24    }
25    ListNode* removeNodes(ListNode* head) {
26
27        head = reverseList(head);
28
29        if (head == NULL) {
30            return NULL;
31        }
32
33        int maxValue = head->val;
34        ListNode* curr = head;
35
36        while (curr != NULL && curr->next != NULL) {
37            if (curr->next->val < maxValue) {
38                curr->next = curr->next->next;
39            } else {
40                curr = curr->next;
41                maxValue = curr->val;
42            }
43        }
44
45        if (head == NULL)
46            return NULL;
47
48        ListNode* res = reverseList(head);
49        return res;
50    }
51};