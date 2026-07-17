// Last updated: 7/17/2026, 4:26:23 PM
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        unordered_set<int> s;

        for (int num : arr) {

            if (s.count(2 * num) || 
               (num % 2 == 0 && s.count(num / 2))) {
                return true;
            }

            s.insert(num);
        }

        return false;
    }
};