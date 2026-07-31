// Last updated: 7/31/2026, 3:02:01 PM
1class Solution {
2public:
3    int numberOfSubarrays(vector<int>& nums, int k) {
4        unordered_map<int, int> mp;
5        mp[0] = 1;
6
7        int odd = 0;
8        int ans = 0;
9
10        for (int num : nums) {
11            if (num % 2 == 1) {
12                odd++;
13            }
14
15            ans+=mp[odd - k];
16
17            mp[odd]++;
18        }
19
20        return ans;
21    }
22};