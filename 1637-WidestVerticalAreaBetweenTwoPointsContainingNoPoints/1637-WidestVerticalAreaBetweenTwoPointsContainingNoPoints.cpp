// Last updated: 6/7/2026, 10:03:03 PM
1class Solution {
2public:
3    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
4        vector<int> ans;
5
6        for(int i=0;i<points.size();i++){
7            ans.push_back(points[i][0]);
8        }
9        sort(ans.begin(),ans.end());
10
11        int x=0;
12
13        for(int i=1;i<ans.size();i++){
14            if(ans[i]-ans[i-1]>x){
15                x=ans[i]-ans[i-1];
16            }
17        }
18        return x;
19    }
20};