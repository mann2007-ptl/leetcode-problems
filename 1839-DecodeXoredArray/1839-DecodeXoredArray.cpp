// Last updated: 7/17/2026, 4:25:57 PM
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);

        for(int x : encoded){
            ans.push_back(ans.back()^x);
        }
        return ans;
    }
};