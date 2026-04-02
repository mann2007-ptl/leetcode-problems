// Last updated: 4/2/2026, 3:07:39 PM
1/**
2 * @param {number[]} nums
3 * @return {number}
4 */
5var removeDuplicates = function(nums) {
6    if(nums.length===0){
7        return 0;
8    }
9
10    let i=0;
11    for(let j=0;j<nums.length;j++){
12        if(nums[j]!==nums[i]){
13            i++;
14            nums[i]=nums[j]
15        }
16    }
17    return i+1;
18};