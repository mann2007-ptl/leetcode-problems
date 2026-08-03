// Last updated: 8/3/2026, 4:48:01 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 
11 */
12class Solution {
13public:
14    ListNode* removeNthFromEnd(ListNode* head, int n) {
15        int count = 0;
16        ListNode * temp = head;
17
18        while(temp != NULL){
19            count++;
20            temp = temp -> next;
21        }
22
23        if(count == n){
24            return head -> next;
25        }
26
27        temp = head;
28
29        for(int i=1;i<count-n;i++){
30            temp = temp -> next;
31        }
32
33        temp -> next = temp -> next -> next;
34
35        return head;
36    }
37};