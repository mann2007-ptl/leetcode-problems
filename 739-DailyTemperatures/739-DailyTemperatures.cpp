// Last updated: 6/2/2026, 12:02:12 PM
1class Solution {
2public:
3    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
4        vector<int> ans;
5        int found = 0;
6        int nextGreater = -1;
7
8        for (int i = 0; i < nums1.size(); i++) {
9            found = 0;
10            nextGreater = -1;
11
12            for (int j = 0; j < nums2.size(); j++) {
13                if (nums2[j] == nums1[i]) {
14                    found = 1;
15                }
16                else if (found && nums2[j] > nums1[i]) {
17                    nextGreater = nums2[j];
18                    break;
19                }
20            }
21
22            ans.push_back(nextGreater);
23        }
24
25        return ans;
26    }
27};