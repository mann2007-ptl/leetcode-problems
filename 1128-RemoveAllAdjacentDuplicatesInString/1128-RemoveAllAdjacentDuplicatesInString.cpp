// Last updated: 7/17/2026, 4:26:38 PM
class Solution {
public:
    string removeDuplicates(string s) {
        string result;

        for (int i = 0; i < s.size(); i++) {
            if (!result.empty() && result.back() == s[i]) {
                result.pop_back();
            } else {
                result.push_back(s[i]);
            }
        }

        return result;
    }
};