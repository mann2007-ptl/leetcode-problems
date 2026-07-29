// Last updated: 7/29/2026, 3:03:07 PM
1class Solution {
2public:
3    void sortColors(vector<int>& nums) {
4        int zero = 0;
5        int one = 0;
6        int two = 0;
7
8        for(int x : nums){
9            if(x==0){
10                zero++;
11            }
12            else if(x==1){
13                one++;
14            }
15            else{
16                two++;
17            }
18        }
19
20        int i=0;
21
22        while(zero--){
23            nums[i++] = 0;
24        }
25        while(one--){
26            nums[i++] = 1;
27        }
28        while(two--){
29            nums[i++] = 2;
30        }
31    }
32};