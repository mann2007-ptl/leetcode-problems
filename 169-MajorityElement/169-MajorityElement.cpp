// Last updated: 4/7/2026, 9:52:06 AM
1class Solution {
2public:
3    int majorityElement(vector<int>& nums) {
4        int number = 0;
5        int count = 0;
6
7        for(int i=0;i<nums.size();i++){
8            if(count==0){
9                number = nums[i];
10                count = 1;
11            }
12            else if(nums[i]==number){
13                count++;
14            }
15            else{
16                count--;
17            }
18        }
19        return number;
20    }
21};