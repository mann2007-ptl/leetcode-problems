// Last updated: 8/10/2026, 4:27:29 PM
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
13    ListNode* partition(ListNode* head, int x) {
14        ListNode * big = NULL;
15        ListNode * small = NULL;
16
17        ListNode * s = NULL;
18        ListNode * b = NULL;
19
20        while(head != NULL){
21            if(head -> val < x){
22                if(small == NULL){
23                    small = head;
24                    s = head;
25                }
26                else{
27                    s -> next = head;
28                    s = s -> next;
29                }
30            }
31            else{
32                if(big ==NULL){
33                    big = head;
34                    b = head;
35                }
36                else{
37                    b -> next = head;
38                    b = b -> next;
39                }
40            }
41            head = head -> next;
42        }
43
44        if(small == NULL){
45            return big;
46        }
47
48        s -> next = big;
49
50        if(b != NULL){
51            b->next = NULL;
52        }
53
54        return small;
55    }
56};
57
58 