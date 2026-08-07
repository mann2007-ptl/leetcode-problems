// Last updated: 8/7/2026, 5:36:41 PM
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
13    ListNode* rotateRight(ListNode* head, int k) {
14        if(head == NULL || head -> next == NULL || k==0){
15            return head;
16        }
17
18        ListNode * temp = head;
19        int length = 1;
20
21        while(temp -> next != NULL){
22            temp = temp -> next;
23            length++;
24        }
25
26        k = k % length;
27
28        if(k==0){
29            return head;
30        }
31
32        int move = length - k;
33
34        ListNode * curr = head;
35
36        while(move > 1){
37            curr = curr -> next;
38            move--;
39        }
40
41        ListNode * newNode = curr -> next;
42
43        curr -> next = NULL;
44  
45        temp -> next = head;
46       
47        return newNode;
48    }
49};