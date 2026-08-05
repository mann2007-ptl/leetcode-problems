// Last updated: 8/5/2026, 3:28:52 PM
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
13    ListNode* deleteMiddle(ListNode* head) {
14        ListNode * prev = NULL;
15        ListNode * slow = head;
16        ListNode * fast = head;
17
18        if(head == NULL || head -> next == NULL){
19            return NULL;
20        }
21
22        while(fast != NULL && fast -> next != NULL){
23            prev = slow;
24            slow = slow -> next;
25            fast = fast -> next -> next;
26        }
27
28        prev -> next = slow -> next;
29        delete slow;
30
31        return head;
32    }
33};