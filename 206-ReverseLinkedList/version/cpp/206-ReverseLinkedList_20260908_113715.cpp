// Last updated: 9/8/2026, 11:37:15 AM
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
12
13        //---------- solution 1 ----------
14
15        // ListNode* slow = head;
16        // ListNode* fast = head;
17        // bool check = false;
18        // while (fast != NULL && fast->next != NULL) {
19        //     slow = slow->next;
20        //     fast = fast->next->next;
21
22        //     if (slow == fast) {
23        //         check = true;
24        //         break;
25        //     }
26        // }
27        // if (check) {
28        //     slow = head;
29        //     while (slow) {
30        //         if (slow == fast) {
31        //             return fast;
32        //         }
33        //         slow = slow->next;
34        //         fast = fast->next;
35        //     }
36        // }
37        // return nullptr;
38
39        //---------- solution 2 ----------
40
41        set<ListNode*> address;
42        ListNode* i = head;
43
44        while (i != NULL) {
45            if (address.count(i)) {
46                return i;
47            }
48            address.insert(i);
49            i = i->next;
50        }
51        return NULL;
52    }
53};