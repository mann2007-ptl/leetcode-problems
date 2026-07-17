// Last updated: 7/17/2026, 4:23:33 PM
class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> vowel;
        unordered_map<char, int> cons;

        int maxVowel = 0;
        int maxCons = 0;

        for (char ch : s) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowel[ch]++;
                maxVowel = max(maxVowel, vowel[ch]);
            } else {
                cons[ch]++;
                maxCons = max(maxCons, cons[ch]);
            }
        }

        return maxVowel + maxCons;
    }
};