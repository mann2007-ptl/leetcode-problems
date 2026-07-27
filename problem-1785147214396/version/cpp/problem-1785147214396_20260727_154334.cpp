// Last updated: 7/27/2026, 3:43:34 PM
1class Solution {
2public:
3    bool squareIsWhite(string coordinates) {
4        return ((coordinates[0] + coordinates[1]) % 2 != 0);
5    }
6};