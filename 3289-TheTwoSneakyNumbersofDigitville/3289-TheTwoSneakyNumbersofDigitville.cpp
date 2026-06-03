// Last updated: 6/3/2026, 10:30:30 PM
1class Solution {
2public:
3    vector<int> getSneakyNumbers(vector<int>& nums) {
4        unordered_map<int , int> newMap;
5        vector<int> res;
6
7        for(int i=0;i<nums.size();i++){
8            if(newMap.find(nums[i]) != newMap.end()){
9                res.push_back(nums[i]);
10            }
11            else{
12                newMap[nums[i]]=1;
13            }
14        }
15        return res;
16    }
17};