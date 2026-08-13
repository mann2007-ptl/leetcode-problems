// Last updated: 8/13/2026, 3:19:22 PM
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
13    vector<int> nextLargerNodes(ListNode* head) {
14        vector<int> temp;
15
16        while(head != NULL){
17            temp.push_back(head -> val);
18            head = head -> next;
19        }
20
21        vector <int> ans(temp.size(),0);
22
23        for(int i=0;i<temp.size();i++){
24            for(int j=i+1;j<temp.size();j++){
25                if(temp[j]>temp[i]){
26                    ans[i] = temp[j];
27                    break;
28                }
29            }
30        }
31        return ans;
32    }
33};