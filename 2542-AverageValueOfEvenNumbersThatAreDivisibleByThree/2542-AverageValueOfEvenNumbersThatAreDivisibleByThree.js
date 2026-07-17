// Last updated: 7/17/2026, 4:24:38 PM
/**
 * @param {number[]} nums
 * @return {number}
 */
var averageValue = function(nums) {
    let avg=0;
    let sum=0;
    let count=0;

    for(let i=0;i<nums.length;i++){
        if(nums[i]%2===0 && nums[i]%3===0){
            count++;
            sum=sum+nums[i];
        }
    }

    if(sum==0 || count==0){
        return 0;
    }
    avg=Math.floor(sum/count);
    return avg;
};