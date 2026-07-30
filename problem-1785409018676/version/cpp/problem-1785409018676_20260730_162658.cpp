// Last updated: 7/30/2026, 4:26:58 PM
1class Solution {
2public:
3    vector<int> minBitwiseArray(vector<int>& nums) {
4        vector<int> res;
5
6        for (int num : nums) {
7
8            bool found = false;
9
10            for (int i = 0; i < num; i++) {
11                if ((i | (i + 1)) == num) {
12                    res.push_back(i);
13                    found = true;
14                    break;
15                }
16            }
17
18            if(!found){
19                res.push_back(-1);
20            }
21        }
22        return res;
23    }
24};