// Last updated: 7/17/2026, 4:24:50 PM
/**
 * @param {number[]} nums
 * @param {number} diff
 * @return {number}
 */
var arithmeticTriplets = function(nums, diff) {
    let count = 0;
        for(let i=0;i<nums.length-2;i++){
            for(let j=i+1;j<nums.length-1;j++){
                for(let k=j+1;k<nums.length;k++){
                    if(nums[j]-nums[i]==diff && nums[k]-nums[j]==diff){
                        count++;
                    }
                }
            }
        }
    return count;
};