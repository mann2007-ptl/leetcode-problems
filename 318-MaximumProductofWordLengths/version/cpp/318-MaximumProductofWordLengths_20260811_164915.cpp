// Last updated: 8/11/2026, 4:49:15 PM
1class Solution {
2public:
3    int maxProduct(vector<string>& words) {
4        int result = 0;
5
6        for(int i=0;i<words.size();i++){
7            set<char>s;
8
9            for(char c : words[i]){
10                s.insert(c);
11            }
12
13            for(int j=i+1;j<words.size();j++){
14                bool common = false;
15
16                for(char c : words[j]){
17                    if(s.count(c)){
18                        common = true;
19                        break;
20                    }
21                }
22
23                if(common == false){
24                    int product = words[i].size() * words[j].size();
25                    result = max(product,result);
26                }
27            }
28        }
29        return result;
30    }
31};