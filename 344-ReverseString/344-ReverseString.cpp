// Last updated: 4/9/2026, 9:31:12 AM
1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        int i=0;
5        int j=s.size()-1;
6
7        while(i<j){
8          swap(s[i],s[j]);
9            i++;
10            j--;
11        }
12    }
13};