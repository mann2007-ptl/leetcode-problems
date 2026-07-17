// Last updated: 7/17/2026, 4:26:45 PM
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.size() - 1;

        while (i < j) {
            if (!(isalpha(s[i]))) {
                i++;
            } else if (!(isalpha(s[j]))) {
                j--;
            } else {
                swap(s[i], s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};