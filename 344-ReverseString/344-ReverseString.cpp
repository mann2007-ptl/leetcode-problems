// Last updated: 4/9/2026, 10:17:45 AM
1class Solution {
2public:
3    void reverseString(vector<char>& s) {
4        int i=0;
5        int j=s.size()-1;
6
7        while(i<j){
8            int temp = s[i];
9            s[i]=s[j];
10            s[j]=temp;
11            i++;
12            j--;
13        }
14    }
15};