// Last updated: 4/15/2026, 11:55:16 AM
1class Solution {
2public:
3    bool isIsomorphic(string s, string t) {
4        unordered_map<char,char> s1;
5        unordered_map<char,char> t1;
6
7        for(int i=0;i<s.size();i++){
8            char ch1 = s[i];
9            char ch2 = t[i];
10
11            if(s1.count(ch1) && s1[ch1]!=ch2){
12                return false;
13            }
14
15            if(t1.count(ch2) && t1[ch2]!=ch1){
16                return false;
17            }
18
19            s1[ch1]=ch2;
20            t1[ch2]=ch1;
21        }
22
23        return true;
24    }
25};