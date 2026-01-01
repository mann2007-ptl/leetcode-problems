// Last updated: 3/6/2026, 2:08:12 PM
/**
 * @param {number[]} nums
 * @return {number}
 */
var minElement = function(nums) {
    let res = [];
    for(let i=0;i<nums.length;i++){
        let sum = 0;
        let temp = nums[i];
        while(temp>0){
            let digit = temp % 10;
            sum = sum + digit;
            temp = Math.floor(temp / 10);
        }
        res.push(sum);
    }
    return Math.min(...res);
};