// Last updated: 5/21/2026, 10:10:25 AM
1class Solution {
2public:
3    vector<int> selfDividingNumbers(int left, int right) {
4        vector<int> res;
5
6        for(int i=left;i<=right;i++){
7            int num = i;
8
9            while(num>0){
10                int remainder = num % 10;
11
12                if(remainder == 0 || i % remainder != 0){
13                    break;
14                }
15
16                num = num / 10;
17            }
18
19            if(num == 0){
20                res.push_back(i);
21            }
22        }
23        return res;
24    }
25};