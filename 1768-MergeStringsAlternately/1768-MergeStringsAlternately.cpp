// Last updated: 4/24/2026, 10:22:06 AM
1class Solution {
2public:
3    string mergeAlternately(string word1, string word2) {
4        string res;
5        int i=0;
6        int j=0;
7
8        while(i<word1.size() || j<word2.size()){
9            if(i<word1.size()){
10                res+=word1[i];
11                i++;
12            }
13            if(j<word2.size()){
14                res+=word2[j];
15                j++;
16            }
17        }
18
19        return res;
20    }
21};