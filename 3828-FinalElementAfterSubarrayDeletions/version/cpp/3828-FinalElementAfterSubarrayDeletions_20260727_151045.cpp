// Last updated: 7/27/2026, 3:10:45 PM
1class Solution {
2public:
3    int finalElement(vector<int>& nums) {
4        int first = nums[0];
5        int last = 0;
6
7        for(int i=0;i<nums.size();i++){
8            last= nums[i];
9        }
10
11        if(first > last){
12            return first;
13        }
14        return last;
15
16        
17    }
18};