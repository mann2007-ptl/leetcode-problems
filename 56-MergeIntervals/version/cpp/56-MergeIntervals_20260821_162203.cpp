// Last updated: 8/21/2026, 4:22:03 PM
1class Solution {
2public:
3    vector<vector<int>> merge(vector<vector<int>>& intervals) {
4        sort(intervals.begin(),intervals.end());
5
6        vector<vector<int>> res;
7        res.push_back(intervals[0]);
8       
9        for(int i=1;i<intervals.size();i++){
10            if(res.back()[1] < intervals[i][0]){
11                res.push_back(intervals[i]);
12            }
13            else{
14                res.back()[1] = max(res.back()[1],intervals[i][1]);
15            }
16        }
17        return res;
18    }
19};