// Last updated: 3/9/2026, 5:20:09 PM
1/**
2 * @param {number[]} nums
3 * @return {number}
4 */
5var minimumAverage = function(nums) {
6    nums = nums.sort((a,b)=>a-b);
7
8    let left = 0;
9    let right = nums.length-1;
10    let minAvg = +Infinity;
11
12    while(left < right){
13        let avg = (nums[left]+nums[right]) / 2;
14        minAvg = Math.min(minAvg , avg);
15        left++;
16        right--;
17    }
18    return minAvg
19};