// Last updated: 3/9/2026, 4:37:28 PM
1/**
2 * @param {number[]} nums
3 * @return {number}
4 */
5var thirdMax = function(nums) {
6    let firstMax = -Infinity;
7    let secondMax = -Infinity;
8    let thirdMax = -Infinity;
9
10    for(let i=0;i<nums.length;i++){
11        if(nums[i]>firstMax){
12            firstMax = nums[i];
13        }
14    }
15
16    for(let i=0;i<nums.length;i++){
17        if(nums[i]<firstMax && nums[i]>secondMax){
18            secondMax = nums[i];
19        }
20    }
21
22    for(let i=0;i<nums.length;i++){
23        if(nums[i]<secondMax && nums[i]>thirdMax){
24            thirdMax = nums[i];
25        }
26    }
27
28    if(thirdMax === -Infinity){
29        return firstMax;
30    }
31
32    return thirdMax;
33};