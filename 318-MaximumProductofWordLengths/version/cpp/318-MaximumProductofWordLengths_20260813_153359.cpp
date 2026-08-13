// Last updated: 8/13/2026, 3:33:59 PM
1class Solution {
2public:
3    int maxProduct(vector<string>& words) {
4        int result = 0;
5
6        for(int i=0;i<words.size();i++){
7            unordered_set<char> s (words[i].begin(),words[i].end());
8
9            for(int j=i+1;j<words.size();j++){
10                bool found = false;
11
12                for(char c : words[j]){
13                    if(s.count(c)){
14                        found = true;
15                        break;
16                    }
17                }
18
19                if(found == false){
20                    int product = words[i].size() * words[j].size();
21                    result = max(product,result);
22                }
23            }
24        }
25        return result;
26    }
27};