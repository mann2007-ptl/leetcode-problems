// Last updated: 7/31/2026, 3:26:36 PM
1class Solution {
2public:
3    int minimumPushes(string word) {
4        vector<int> freq(26, 0);
5
6        for (char ch : word) {
7            freq[ch - 'a']++;
8        }
9
10        sort(freq.begin(),freq.end(),greater<int>());
11
12        int ans = 0;
13
14        for(int i=0 ; i<26 ; i++){
15            if(freq[i]==0){
16                break;
17            }
18
19            ans+=freq[i] * (i/8 + 1);
20        }
21        return ans;
22    }
23};