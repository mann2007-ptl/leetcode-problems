// Last updated: 8/5/2026, 4:57:40 PM
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
13    ListNode* removeElements(ListNode* head, int val) {
14
15        if(head == NULL){
16           return NULL; 
17        }
18
19        while(head != NULL && head -> val == val){
20            head = head -> next;
21        }
22
23        if(head == NULL){
24            return NULL;
25        }
26
27        ListNode * temp = head;
28
29        while(temp -> next != NULL){
30            if(temp -> next -> val == val){
31                temp -> next = temp -> next -> next;
32            }
33            else{
34                temp = temp -> next;
35            }
36        }
37        return head;
38    }
39};