// Last updated: 3/6/2026, 2:09:04 PM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortedSquares = function(nums) {
    let res = [];
    for(let i=0;i<nums.length;i++){
        res.push(nums[i]*nums[i]);
    }
    res=res.sort((a,b)=>a-b);
    return res;
};