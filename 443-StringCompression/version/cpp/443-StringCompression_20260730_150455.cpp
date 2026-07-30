// Last updated: 7/30/2026, 3:04:55 PM
1class Solution {
2public:
3    int compress(vector<char>& chars) {
4        int count = 1;
5        string ans = "";
6
7        for(int i=0;i<chars.size();i++){
8            if(i<chars.size() - 1 && chars[i] == chars[i+1]){
9                count++;
10            }
11            else{
12                ans+=chars[i];
13
14                if(count > 1){
15                    ans+=to_string(count);
16                }
17                count = 1;
18            }
19        }
20
21        chars.clear();
22
23        for(char ch : ans){
24            chars.push_back(ch);
25        }
26        return chars.size();
27    }
28};