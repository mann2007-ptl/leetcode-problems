// Last updated: 8/13/2026, 4:41:12 PM
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
13    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
14        ListNode* head = list1;
15        ListNode* tail = list1;
16
17        for (int i = 0; i < a - 1; i++) {
18            head = head->next;
19            tail = tail->next;
20        }
21
22        for(int i=a;i<=b+1;i++){
23            tail = tail -> next;
24        }
25        
26        head -> next = list2;
27
28        while(head -> next != NULL){
29            head = head -> next;
30        }
31
32        head -> next = tail;
33        return list1;
34    }
35};