// Last updated: 8/13/2026, 4:25:14 PM
1class Solution {
2public:
3    int pairSum(ListNode* head) {
4
5        ListNode* prev = NULL;
6        ListNode* curr = head;
7
8        while (curr != NULL) {
9            ListNode* node = new ListNode(curr->val);
10            node->next = prev;
11            prev = node;
12            curr = curr->next;
13        }
14
15        ListNode* temp = prev;
16        ListNode* curr2 = head;
17
18        int maxSum = INT_MIN;
19
20        while (temp != NULL && curr2 != NULL) {
21            maxSum = max(maxSum, temp->val + curr2->val);
22
23            temp = temp->next;
24            curr2 = curr2->next;
25        }
26
27        return maxSum;
28    }
29};