// Last updated: 9/9/2026, 11:15:28 AM
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
14
15    // ---------- solution 1 ----------
16
17    //    ListNode * reverse = NULL;
18    //    ListNode * temp = head;
19
20    //    while(temp != NULL){
21    //     ListNode * newNode = new ListNode(temp->val);
22    //     newNode -> next = reverse;
23    //     reverse = newNode;
24    //     temp = temp -> next;
25    //    }
26
27    //    while(head != NULL){
28    //     if((head->val) != (reverse->val)){
29    //         return false;
30    //     }
31    //     head = head -> next;
32    //     reverse = reverse -> next;
33    //    }
34
35    //    return true;
36
37    // ---------- solution 2 ----------
38
39    ListNode* address = NULL;
40    ListNode* i = head;
41
42    while(i != NULL){
43        ListNode* n = new ListNode();
44        n -> next = address;
45        address = n;
46        n -> val = i -> val;
47        i = i -> next;
48    }
49
50    i = head;
51    ListNode* j = address;
52
53    while(i != NULL){
54        if(i -> val != j -> val){
55            return false;
56        }
57        i = i -> next;
58        j = j -> next;
59    }
60
61    return true;
62
63    }
64};