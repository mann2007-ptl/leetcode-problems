// Last updated: 3/9/2026, 5:24:44 PM
1class Solution {
2public:
3    double minimumAverage(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5
6        int i = 0;
7        int j = nums.size() - 1;
8        double minAvg = INT_MAX;
9
10        while(i < j){
11            double avg = (nums[i] + nums[j]) / 2.0;
12            minAvg = min(minAvg, avg);
13            i++;
14            j--;
15        }
16
17        return minAvg;
18    }
19};