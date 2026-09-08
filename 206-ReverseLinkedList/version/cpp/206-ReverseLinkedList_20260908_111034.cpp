// Last updated: 9/8/2026, 11:10:34 AM
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
11    bool hasCycle(ListNode *head) {
12
13        // ---------- solution 1 ----------
14
15        // ListNode * slow = head;
16        // ListNode * fast = head;
17
18        // while(fast != NULL && fast -> next != NULL){
19        //     slow = slow -> next;
20        //     fast = fast -> next -> next;
21
22        //     if(slow == fast){
23        //         return true;
24        //     }
25        // }
26        // return false;
27
28
29        // ---------- solution 2 ----------
30
31        set <ListNode*> address;
32        ListNode* i= head;
33
34        while(i != NULL){
35            if(address.count(i)){
36                return true;
37            }
38            address.insert(i);
39            i = i -> next;
40        } 
41        return false;
42
43    }
44};