// Last updated: 7/17/2026, 4:23:52 PM
/**
 * @param {number[]} nums
 * @return {number}
 */
var minimumAverage = function(nums) {
    nums = nums.sort((a,b)=>a-b);

    let left = 0;
    let right = nums.length-1;
    let minAvg = +Infinity;

    while(left < right){
        let avg = (nums[left]+nums[right]) / 2;
        minAvg = Math.min(minAvg , avg);
        left++;
        right--;
    }
    return minAvg
};