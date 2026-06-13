// Last updated: 6/13/2026, 11:54:54 AM
1class Solution {
2public:
3    int maxFreqSum(string s) {
4        unordered_map<char, int> vowel;
5        unordered_map<char, int> cons;
6
7        int maxVowel = 0;
8        int maxCons = 0;
9
10        for (char ch : s) {
11            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
12                vowel[ch]++;
13                maxVowel = max(maxVowel, vowel[ch]);
14            } else {
15                cons[ch]++;
16                maxCons = max(maxCons, cons[ch]);
17            }
18        }
19
20        return maxVowel + maxCons;
21    }
22};