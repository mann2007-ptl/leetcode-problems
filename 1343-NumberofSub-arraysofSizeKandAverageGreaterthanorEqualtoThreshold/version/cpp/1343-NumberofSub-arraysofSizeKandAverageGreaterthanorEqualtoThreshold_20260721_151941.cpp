// Last updated: 7/21/2026, 3:19:41 PM
1class Solution {
2public:
3    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
4        int sum = 0;
5        int count = 0;
6
7        for(int i=0;i<k;i++){
8            sum+=arr[i];
9        }
10        int avg = sum / k;
11
12        if(avg >= threshold){
13            count++;
14        }
15
16        for(int i=k;i<arr.size();i++){
17            sum = sum - arr[i-k];
18            sum = sum + arr[i];
19            avg = sum / k;
20
21            if(avg >= threshold){
22                count++;
23            }
24        }
25        return count;
26    }
27};