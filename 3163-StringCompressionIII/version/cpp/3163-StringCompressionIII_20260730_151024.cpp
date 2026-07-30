// Last updated: 7/30/2026, 3:10:24 PM
1class Solution {
2public:
3    string compressedString(string word) {
4        string ans = "";
5        int i = 0;
6        int n = word.size();
7
8        while(i < n){
9            char current = word[i];
10            int count = 0;
11
12            while(i < n && word[i]==current && count < 9){
13                count++;
14                i++;
15            }
16            ans+=to_string(count);
17            ans+=current;
18        }
19        return ans;
20    }
21};