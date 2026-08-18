// Last updated: 8/18/2026, 4:39:43 PM
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
13    ListNode* oddEvenList(ListNode* head) {
14        if (head == NULL || head->next == NULL) {
15            return head;
16        }
17
18        ListNode* odd = head;
19        ListNode* even = head->next;
20        ListNode * result = even;
21
22        while (even != NULL && even->next != NULL){
23            odd -> next = even -> next;
24            odd = odd -> next;
25
26            even -> next = odd -> next;
27            even = even -> next;
28        }
29
30        odd -> next = result;
31
32        return head;
33    }
34};