// Last updated: 5/25/2026, 10:00:22 AM
1class Solution {
2public:
3    int searchInsert(vector<int>& nums, int target) {
4       int low = 0;
5       int high = nums.size()-1;
6
7       while(low<=high){
8        int mid = (low + high) / 2;
9
10        if(nums[mid]==target){
11            return mid;
12        }
13
14        else if(nums[mid]<target){
15            low = mid + 1;
16        }
17        else{
18            high = mid -1;
19        }
20       }
21       return low;
22    }
23};