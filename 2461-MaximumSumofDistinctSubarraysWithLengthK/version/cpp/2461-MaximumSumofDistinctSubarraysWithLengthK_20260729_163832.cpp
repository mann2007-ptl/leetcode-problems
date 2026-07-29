// Last updated: 7/29/2026, 4:38:32 PM
1class Solution {
2public:
3    long long maximumSubarraySum(vector<int>& nums, int k) {
4        unordered_map<int,int> mp;
5        long long sum = 0;
6        long long ans = 0;
7
8        for(int i=0;i<k;i++){
9           sum+=nums[i];
10           mp[nums[i]]++;
11        }
12
13        if(mp.size()==k){
14            ans = sum;
15        }
16
17        for(int i=k;i<nums.size();i++){
18            mp[nums[i-k]]--;
19
20            if(mp[nums[i-k]]==0){
21                mp.erase(nums[i-k]);
22            }   
23            mp[nums[i]]++;
24
25            sum = sum - nums[i-k] + nums[i];
26
27             if (mp.size() == k) {
28                ans = max(ans, sum);
29            } 
30        }
31        return ans;
32    }
33};