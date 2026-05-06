// Last updated: 5/6/2026, 9:29:26 AM
1class Solution {
2public:
3    string defangIPaddr(string address) {
4        string res = "";
5
6        for(char ch : address){
7            if(ch == '.'){
8                res+="[.]";
9            }
10            else{
11                res+=ch;
12            }
13        }
14
15        return res;
16    }
17};
18