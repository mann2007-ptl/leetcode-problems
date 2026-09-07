// Last updated: 9/7/2026, 11:47:40 AM
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
13    ListNode* middleNode(ListNode* head) {
14        // ListNode * slow = head;
15        // ListNode * fast = head;
16
17        // while(fast != NULL && fast -> next != NULL){
18        //     slow = slow -> next;
19        //     fast = fast -> next -> next;
20        // }
21        // return slow;
22
23        ListNode* i = head;
24        int count = 0;
25
26        while(i != NULL){
27            count++;
28            i = i->next;
29        }
30
31        int mid = (count / 2) + 1;
32
33        count = 1;
34        i = head;
35
36        while(count < mid){
37            i = i-> next;
38            count++;
39        }
40        return i;
41    }
42};