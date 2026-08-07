// Last updated: 8/7/2026, 3:31:17 PM
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
13    ListNode* reverseBetween(ListNode* head, int left, int right) {
14
15        if(head == NULL || left == right){
16            return head;
17        }
18
19        ListNode * prev = NULL;
20        ListNode * curr = head;
21        int position = 1;
22
23        while(position < left){
24            prev = curr;
25            curr = curr -> next;
26            position++;
27        }
28
29        ListNode * first = prev;
30        ListNode * second = curr;
31
32        prev = NULL;
33
34        while(left <= right){
35            ListNode * temp = curr -> next;
36            curr -> next = prev;
37            prev = curr;
38            curr = temp;
39
40            left++;
41        }
42
43        if(first != NULL){
44            first -> next = prev;
45        }
46        else{
47            head = prev;
48        }
49        second->next = curr;
50
51        return head;
52    }
53};