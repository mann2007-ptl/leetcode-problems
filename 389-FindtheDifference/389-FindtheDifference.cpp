// Last updated: 6/7/2026, 4:09:03 PM
1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        set<int>s (nums.begin(),nums.end());
5        vector<int> ans;
6
7        for(int i=1;i<=nums.size();i++){
8            if(s.find(i)==s.end()){
9                ans.push_back(i);
10            }
11        }
12        return ans;
13    }
14};