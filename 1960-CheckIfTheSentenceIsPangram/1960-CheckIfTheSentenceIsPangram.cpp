// Last updated: 7/17/2026, 4:25:53 PM
class Solution {
public:
    bool checkIfPangram(string sentence) {
        string checkStr = "abcdefghijklmnopqrstuvwxyz";

        for (int i = 0; i < checkStr.size(); i++) {
            if (sentence.find(checkStr[i]) == string::npos) {
                return false;
            }
        }

        return true;
    }
};