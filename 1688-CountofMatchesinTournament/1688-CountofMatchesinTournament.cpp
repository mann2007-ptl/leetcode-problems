// Last updated: 5/15/2026, 10:27:36 AM
1class Solution {
2public:
3    int numberOfMatches(int n) {
4      int totalMatches = 0;
5
6      while(n>1){
7        int matchesThisRound = n/2;
8
9        totalMatches += matchesThisRound;
10
11        int teamQualified = matchesThisRound;
12
13        int extraTeam = n%2;
14
15        n = teamQualified + extraTeam;
16      }
17
18      return totalMatches;
19    }
20};