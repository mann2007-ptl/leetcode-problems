// Last updated: 7/17/2026, 4:26:19 PM
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());

        return target == arr;
    }
};