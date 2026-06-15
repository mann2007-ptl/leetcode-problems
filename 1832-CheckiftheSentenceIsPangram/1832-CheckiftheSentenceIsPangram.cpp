// Last updated: 6/15/2026, 11:15:22 AM
1class Solution {
2public:
3    bool checkIfPangram(string sentence) {
4        string checkStr = "abcdefghijklmnopqrstuvwxyz";
5
6        for (int i = 0; i < checkStr.size(); i++) {
7            if (sentence.find(checkStr[i]) == string::npos) {
8                return false;
9            }
10        }
11
12        return true;
13    }
14};