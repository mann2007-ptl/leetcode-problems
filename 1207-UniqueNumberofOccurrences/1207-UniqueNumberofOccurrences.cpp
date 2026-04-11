// Last updated: 4/11/2026, 3:46:33 PM
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> arrMap;
        unordered_set<int> occ;

        for (const auto& num : arr) {
            arrMap[num]++;
        }

        for (const auto& [num, cnt] : arrMap) {
            occ.insert(cnt);
        }

        return occ.size() == arrMap.size();
    }
};