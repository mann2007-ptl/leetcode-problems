// Last updated: 8/12/2026, 2:56:28 PM
1class Solution {
2public:
3    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
4        vector<int> ans;
5
6        for(int i=0;i<points.size();i++){
7            ans.push_back(points[i][0]);
8        }
9
10        sort(ans.begin(),ans.end());
11
12        int max = 0;
13
14        for(int i=1;i<ans.size();i++){
15            if(ans[i]-ans[i-1] > max){
16                max = ans[i]-ans[i-1];
17            }
18        }
19        return max;
20    }
21};