// Last updated: 8/24/2026, 3:08:03 PM
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
11    ListNode *detectCycle(ListNode *head) {
12
13        unordered_map<ListNode * , int> freq;
14        ListNode * temp = head;
15
16        while(temp){
17            freq[temp]++;
18
19            if(freq[temp] > 1){
20                return temp;
21            }
22
23            temp = temp -> next;
24        }
25        return nullptr;
26    }
27};