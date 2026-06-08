// Last updated: 6/8/2026, 9:51:33 AM
1class Solution {
2public:
3    vector<string> summaryRanges(vector<int>& nums) {
4        vector<string> ans;
5        int n = nums.size();
6
7        for (int i = 0; i < n; i++) {
8            int start = nums[i];
9
10            while (i + 1 < n && nums[i + 1] == nums[i] + 1) {
11                i++;
12            }
13            int end = nums[i];
14
15            if(start==end){
16                ans.push_back(to_string(start));
17            }
18            else{
19                ans.push_back(to_string(start) + "->" + to_string(end));
20            }
21        }
22        return ans;
23    }
24};