// Last updated: 3/30/2026, 2:09:09 PM
1/**
2 * @param {number[]} nums
3 * @param {number} diff
4 * @return {number}
5 */
6var arithmeticTriplets = function(nums, diff) {
7    let count = 0;
8        for(let i=0;i<nums.length-2;i++){
9            for(let j=i+1;j<nums.length-1;j++){
10                for(let k=j+1;k<nums.length;k++){
11                    if(nums[j]-nums[i]==diff && nums[k]-nums[j]==diff){
12                        count++;
13                    }
14                }
15            }
16        }
17    return count;
18};