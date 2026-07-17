// Last updated: 7/17/2026, 4:27:35 PM
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int> obj;
        vector<int> res;

        for (int charNum : nums) {
            if (obj[charNum] == 0) {
                obj[charNum] = 1;
            } else {
                obj[charNum]++;
            }
        }

        for (auto it : obj) {
            if (it.second == 1) {
                res.push_back(it.first);
            }
        }

        return res;
    }
};