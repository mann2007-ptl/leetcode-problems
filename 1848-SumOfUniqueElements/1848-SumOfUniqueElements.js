// Last updated: 3/6/2026, 2:08:47 PM
/**
 * @param {number[]} nums
 * @return {number}
 */
var sumOfUnique = function(nums) {
    let obj = {};
    let sum = 0;
    for(let char of nums){
        if(obj[char]===undefined){
            obj[char]= 1;
        }
        else{
            obj[char]++;
        }
    }
   for(let value in obj){
       if(obj[value] === 1){
           sum = sum + Number(value);
       }
   }
   return sum;
};

console.log(sumOfUnique([1,2,3,2]))