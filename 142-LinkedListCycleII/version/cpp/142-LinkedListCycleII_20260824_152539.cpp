// Last updated: 8/24/2026, 3:25:39 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    ListNode* detectCycle(ListNode* head) {
12        ListNode* slow = head;
13        ListNode* fast = head;
14        bool check = false;
15        while (fast != NULL && fast->next != NULL) {
16            slow = slow->next;
17            fast = fast->next->next;
18
19            if (slow == fast) {
20                check = true;
21                break;
22            }
23        }
24        if (check) {
25            slow = head;
26            while (slow) {
27                if (slow == fast) {
28                    return fast;
29                }
30                slow = slow->next;
31                fast = fast->next;
32            }
33        }
34        return nullptr;
35    }
36};