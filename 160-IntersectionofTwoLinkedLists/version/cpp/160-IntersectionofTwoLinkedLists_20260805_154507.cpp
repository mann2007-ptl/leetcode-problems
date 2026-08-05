// Last updated: 8/5/2026, 3:45:07 PM
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
11    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
12        ListNode* a=headA;
13        ListNode* b=headB;
14        while(a!=b){
15            a=(a==NULL)?headB:a->next;
16            b=(b==NULL)?headA:b->next;
17        }
18        return b;
19    }
20};