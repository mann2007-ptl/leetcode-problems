// Last updated: 5/28/2026, 10:17:18 AM
1class Solution {
2public:
3    vector<int> twoSum(vector<int>& numbers, int target) {
4      int left = 0;
5      int right = numbers.size()-1;
6
7      while(left<right){
8        int sum = numbers[left]+numbers[right];
9 
10         if(sum == target){
11            return {left+1,right+1};
12         }
13         else if(sum<target){
14            left++;
15         }
16         else{
17            right--;
18         }
19
20      }
21      return {};
22    }
23};