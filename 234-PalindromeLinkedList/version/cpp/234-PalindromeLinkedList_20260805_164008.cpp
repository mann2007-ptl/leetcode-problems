// Last updated: 8/5/2026, 4:40:08 PM
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
13    bool isPalindrome(ListNode* head) {
14       ListNode * reverse = NULL;
15       ListNode * temp = head;
16
17       while(temp != NULL){
18        ListNode * newNode = new ListNode(temp->val);
19        newNode -> next = reverse;
20        reverse = newNode;
21        temp = temp -> next;
22       }
23
24       while(head != NULL){
25        if((head->val) != (reverse->val)){
26            return false;
27        }
28        head = head -> next;
29        reverse = reverse -> next;
30       }
31
32       return true;
33    }
34};