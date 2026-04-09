// Last updated: 4/9/2026, 9:43:23 AM
1class Solution {
2public:
3    string reverseVowels(string s) {
4        int i=0;
5        int j=s.size()-1;
6
7        while(i<j){
8            if(!(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'||s[i]=='u'||s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O'||s[i]=='U')){
9                i++;
10            }
11            else if(!(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o'||s[j]=='u'||s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O'||s[j]=='U')){
12                j--;
13            }
14            else{
15                swap(s[i],s[j]);
16                i++;
17                j--;
18            }
19        }
20        return s;
21    }
22};