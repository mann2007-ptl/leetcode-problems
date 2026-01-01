// Last updated: 3/6/2026, 2:09:46 PM
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    for(let i=0;i<nums.length;i++){
        for(let j=i+1;j<nums.length;j++){
            if(nums[i] + nums[j] == target){
               return [i,j]
            }
        }
    }
}
console.log(twoSum([2,7,11,15] , 9));