// Last updated: 7/17/2026, 4:26:27 PM
/**
 * @param {number[]} nums
 * @return {number}
 */
var findNumbers = function(nums) {
    let value = 0;
    for(let i=0;i<nums.length;i++){
        let count=0;
        let temp = nums[i];
        while(temp>0){
            count++;
            temp=Math.floor(temp/10);
        }

        if(count%2==0){
            value++;
        }
    }
    return value;
};