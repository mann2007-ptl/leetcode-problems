// Last updated: 3/6/2026, 2:09:07 PM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArrayByParity = function(nums) {
    let res = [];
    for(let i=0;i<nums.length;i++){
        if(nums[i]%2 === 0){
            res.push(nums[i]);
        }
    }
    for(let i=0;i<nums.length;i++){
        if(nums[i]%2 != 0){
            res.push(nums[i]);
        }
    }
    return res;
};