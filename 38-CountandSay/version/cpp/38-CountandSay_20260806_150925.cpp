// Last updated: 8/6/2026, 3:09:25 PM
1class Solution {
2public:
3    string countAndSay(int n) {
4        
5        string res = "1";
6
7        for(int i=2;i<=n;i++){
8            string temp = "";
9            int count = 1;
10
11            for(int j=0;j<res.size();j++){
12                if(res[j] == res[j+1]){
13                  count++;
14                }
15                else{
16                    temp+=to_string(count);
17                    temp+=res[j];
18                    count=1;
19                }
20            }
21
22            res = temp;
23        }
24        return res;
25    }
26};
27
28
29
30
31