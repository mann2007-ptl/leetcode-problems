// Last updated: 7/17/2026, 4:56:40 PM
1class Solution {
2public:
3    int maxVowels(string s, int k) {
4        int count = 0;
5
6        for(int i=0;i<k;i++){
7            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
8                count++;
9            }
10        }
11
12        int ans = count;
13
14        for(int i=k;i<s.size();i++){
15            if(s[i-k]=='a' || s[i-k]=='e' || s[i-k]=='i' || s[i-k]=='o' || s[i-k]=='u'){
16                count--;
17            }
18             if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
19                count++;
20            }
21            ans = max(ans,count);
22        }
23
24        return ans;
25    }
26};