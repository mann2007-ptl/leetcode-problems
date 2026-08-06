// Last updated: 8/6/2026, 5:06:08 PM
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
13    ListNode* swapPairs(ListNode* head) {
14
15        if(head == NULL || head -> next == NULL){
16            return head;
17        }
18        
19        ListNode * newNode = head -> next;
20
21        ListNode * first = head;
22        ListNode * second = head -> next;
23        ListNode * prev = NULL;
24
25        while(first != NULL && second != NULL){
26            first -> next = second -> next;
27            second -> next = first;
28
29            if(prev != NULL){
30                prev -> next = second;
31            }
32            prev = first;
33            first = first -> next;
34
35            if(first != NULL){
36                second = first -> next;
37            }
38            else{
39                second = NULL;
40            }
41        }
42        return newNode;
43    }
44};