// Last updated: 3/16/2026, 10:09:41 AM
1class NumArray {
2public:
3    vector <int> arr;
4    NumArray(vector<int>& nums) {
5        arr=nums;
6    }
7    
8    int sumRange(int left, int right) {
9        int sum = 0;
10
11        for(int i=left;i<=right;i++){
12          sum = sum + arr[i];
13        }
14
15        return sum;
16    }
17};
18
19/**
20 * Your NumArray object will be instantiated and called as such:
21 * NumArray* obj = new NumArray(nums);
22 * int param_1 = obj->sumRange(left,right);
23 */