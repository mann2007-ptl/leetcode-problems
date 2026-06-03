// Last updated: 6/3/2026, 9:59:24 PM
1class Solution {
2public:
3    vector<int> sortEvenOdd(vector<int>& nums) {
4        vector<int> even, odd, res;
5
6        for (int i = 0; i < nums.size(); i++) {
7            if (i % 2 == 0) {
8                even.push_back(nums[i]);
9            } else {
10                odd.push_back(nums[i]);
11            }
12        }
13
14        sort(even.begin(), even.end()); 
15        sort(odd.begin(), odd.end(), greater<int>()); 
16
17        int j = 0, k = 0;
18
19        for (int i = 0; i < nums.size(); i++) {
20            if (i % 2 == 0) {
21                res.push_back(even[j++]);
22            } else {
23                res.push_back(odd[k++]);
24            }
25        }
26
27        return res;
28    }
29};