// Last updated: 3/6/2026, 2:09:06 PM
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;

        for(int x:nums){
            res.push_back(x*x);
        }
        sort(res.begin(),res.end());
        return res;
    }
};