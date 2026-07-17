// Last updated: 7/17/2026, 4:26:08 PM
class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> ans;

        for(int i=0;i<points.size();i++){
            ans.push_back(points[i][0]);
        }
        sort(ans.begin(),ans.end());

        int x=0;

        for(int i=1;i<ans.size();i++){
            if(ans[i]-ans[i-1]>x){
                x=ans[i]-ans[i-1];
            }
        }
        return x;
    }
};