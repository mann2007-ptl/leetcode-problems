// Last updated: 5/11/2026, 9:26:56 AM
1class Solution {
2public:
3    bool isPalindrome(string s) {
4        string ans;
5
6        for (char st : s) {
7            if ((st >= 'A' && st <= 'Z') || (st >= 'a' && st <= 'z') ||
8                (st >= '0' && st <= '9')) {
9                    if (st >= 'A' && st <= 'Z') {
10                        st = st + 32;
11                    }
12                    ans += st;
13                }
14        }
15
16        int i=0;
17        int j=ans.size()-1;
18
19        while(i<j){
20            if(ans[i]!=ans[j]){
21                return false;
22            }
23
24            i++;
25            j--;
26        }
27
28        return true;
29    }
30};