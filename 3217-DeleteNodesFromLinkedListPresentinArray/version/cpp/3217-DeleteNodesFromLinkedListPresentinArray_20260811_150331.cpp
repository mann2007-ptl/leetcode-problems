// Last updated: 8/11/2026, 3:03:31 PM
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
13    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
14        unordered_set<int> st(nums.begin(),nums.end());
15
16        while(head != NULL && st.count(head -> val)){
17            head = head -> next;
18        }
19
20        if(head == NULL){
21            return NULL;
22        }
23
24        ListNode * temp = head;
25
26        while(temp -> next != NULL){
27            if(st.count(temp->next->val)){
28                temp -> next = temp -> next -> next;
29            }
30            else{
31            temp = temp -> next;
32            }
33        }
34        return head;
35    }
36};