// Last updated: 6/13/2026, 11:26:28 AM
1class Solution {
2public:
3    vector<string> commonChars(vector<string>& words) {
4        vector<string> res;
5        string first = words[0];
6
7        for(char ch : first){
8            bool found = true;
9
10            for(int i=1;i<words.size();i++){
11                int pos = words[i].find(ch);
12
13                if(pos==-1){
14                    found = false;
15                    break;
16                }    
17                else{
18                    words[i].erase(pos,1);
19                }
20            }
21
22            if(found){
23                string temp = "";
24                temp+=ch;
25                res.push_back(temp);
26            }
27        }
28        return res;
29    }
30};