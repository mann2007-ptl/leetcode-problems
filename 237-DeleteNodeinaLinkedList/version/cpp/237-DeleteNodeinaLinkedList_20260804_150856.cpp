// Last updated: 8/4/2026, 3:08:56 PM
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
11    void deleteNode(ListNode* node) {
12        ListNode * temp = node -> next;
13
14        node -> val = temp -> val; // here the node with value 5 become 1 mean the LL will be 4 , 1 , 1 , 9
15        node -> next = temp -> next; // here we are giving address of 9 to the node , the node in which we changes the value 
16
17        delete temp;
18    }
19};