// Last updated: 3/6/2026, 2:09:34 PM
/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
    let obj = {};
    for(let char of nums){
        if(obj[char]===undefined){
            obj[char]=1;
        }
        else{
            obj[char]++;
        }
    }

    for(let value in obj){
        if(obj[value]==1){
         return Number(value);
        }
    }
};