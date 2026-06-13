// Last updated: 6/13/2026, 11:18:09 AM
1class Solution {
2public:
3    vector<string> commonChars(vector<string>& words) {
4        vector<string> res;
5        string first = words[0];
6
7        for(char ch : first){
8
9            bool found = true;
10
11            for(int i=1;i<words.size();i++){
12              int pos = words[i].find(ch);
13
14              if(pos==string::npos){
15                found = false;
16                break;
17              }
18              words[i].erase(pos,1);
19            }
20
21            if(found){
22                res.push_back(string(1,ch));
23            }
24
25        }
26        return res;
27    }
28};