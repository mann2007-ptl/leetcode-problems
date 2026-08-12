// Last updated: 8/12/2026, 5:57:13 PM
1class Solution {
2public:
3    vector<string> findRepeatedDnaSequences(string s) {
4        vector<string> result;
5        unordered_map <string , int> mp;
6
7        for(int i=0;i+10<=s.size();i++){
8            string temp = "";
9
10            for(int j=i;j<i+10;j++){
11                temp+=s[j];
12            }
13            mp[temp]++;
14
15            if(mp[temp]==2){
16                result.push_back(temp);
17            }
18        }
19        return result;
20    }
21};