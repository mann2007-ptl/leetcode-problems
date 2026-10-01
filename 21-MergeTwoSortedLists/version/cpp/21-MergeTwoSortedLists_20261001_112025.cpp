// Last updated: 10/1/2026, 11:20:25 AM
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
13    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
14        if(list1 == NULL){
15            return list2;
16        }
17        if(list2 == NULL){
18            return list1;
19        }
20        ListNode * head = NULL;
21        if(list1 -> val <= list2 -> val){
22            head = list1;
23        }
24        else{
25            head = list2;
26        }
27        ListNode* temp = head;
28        ListNode* i = list1;
29        ListNode* j = list2;
30
31        if(head == list1){
32            i = i -> next;
33        }
34        else{
35            j = j -> next;
36        }
37
38        while(i != NULL && j != NULL){
39            if(i -> val <= j -> val){
40                temp -> next = i;
41                i = i -> next;
42            }
43            else{
44                temp -> next = j;
45                j = j-> next;
46            }
47            temp = temp -> next;
48        }
49        if(i != NULL){
50            temp -> next = i;
51        }
52        else{
53            temp -> next = j;
54        }
55        return head;
56    }
57};