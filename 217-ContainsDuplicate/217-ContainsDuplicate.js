// Last updated: 3/6/2026, 2:09:29 PM
/**
 * @param {number[]} nums
 * @return {boolean}
 */
var containsDuplicate = function(nums) {
    let obj={};
    for(let num of nums){
        if(obj[num]==undefined){
            obj[num]=1;
        }
        else{
            return true;
        }
    }
    return false;
};