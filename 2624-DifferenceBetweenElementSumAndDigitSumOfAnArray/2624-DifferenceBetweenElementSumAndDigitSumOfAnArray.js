// Last updated: 3/6/2026, 2:08:34 PM
/**
 * @param {number[]} nums
 * @return {number}
 */
var differenceOfSum = function(nums) {
    let elements = 0;
    let digit=0;
    for(let i=0;i<nums.length;i++){
        elements=elements+nums[i];
        let num = nums[i]
        while(num>0){
            digit += num % 10;
            num = Math.floor(num / 10);
        }
    }
      return Math.abs(elements - digit);
};
console.log(differenceOfSum([1,15,6,3]));