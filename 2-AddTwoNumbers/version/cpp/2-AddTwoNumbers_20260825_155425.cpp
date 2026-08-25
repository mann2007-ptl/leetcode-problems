// Last updated: 8/25/2026, 3:54:25 PM
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
13    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
14        ListNode* result = NULL;
15        ListNode* temp = NULL;
16
17        int carry = 0;
18
19        while (l1 != NULL || l2 != NULL) {
20            int sum = carry;
21
22            if (l1 != NULL) {
23                sum = sum + l1->val;
24                l1 = l1->next;
25            }
26
27            if (l2 != NULL) {
28                sum = sum + l2->val;
29                l2 = l2->next;
30            }
31
32            carry = sum / 10;
33            sum = sum % 10;
34
35            ListNode * newNode = new ListNode(sum);
36
37            if(result == NULL){
38                result = newNode;
39                temp = newNode;
40            }
41            else{
42                temp -> next = newNode;
43                temp = temp -> next;
44            }
45        }
46
47        if(carry != 0){
48            temp -> next = new ListNode(carry);
49        }
50        return result;
51    }
52};