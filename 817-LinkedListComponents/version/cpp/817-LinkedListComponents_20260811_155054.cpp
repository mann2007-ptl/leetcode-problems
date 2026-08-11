// Last updated: 8/11/2026, 3:50:54 PM
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
13    int numComponents(ListNode* head, vector<int>& nums) {
14        unordered_set<int> st(nums.begin(),nums.end());
15
16        int count = 0;
17
18        ListNode * temp = head;
19        
20        while(temp != NULL){
21            if(st.count(temp->val) && (temp -> next == NULL ||  !st.count(temp->next->val))){
22                count++;
23            }
24           temp = temp -> next;
25        }
26        return count;
27    }
28};