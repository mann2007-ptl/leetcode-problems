// Last updated: 4/27/2026, 9:47:21 AM
1/**
2 * @param {number[]} nums
3 * @return {number[]}
4 */
5var smallerNumbersThanCurrent = function(nums) {
6    let res = [];
7    for(let i=0;i<nums.length;i++){
8        let count = 0;
9        for(let j=0;j<nums.length;j++){
10            if(nums[j] < nums[i]){
11                count++;
12            }
13        }
14        res[i] = count 
15    }
16    return res;
17};