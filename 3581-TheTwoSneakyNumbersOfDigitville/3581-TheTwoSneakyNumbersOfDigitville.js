// Last updated: 3/6/2026, 2:08:15 PM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var getSneakyNumbers = function(nums) {
    let newMap = new Map();
    let res = [];

    for(let i=0;i<nums.length;i++){
        if(newMap.has(nums[i])){
            res.push(nums[i]);
        }
        else{
            newMap.set(nums[i]);
        }
    }
    return res;
};