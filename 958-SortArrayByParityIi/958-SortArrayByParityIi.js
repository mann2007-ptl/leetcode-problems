// Last updated: 3/6/2026, 2:09:05 PM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortArrayByParityII = function(nums) {
    let res = [];
    let even = [];
    let odd = [];

    for(let i=0;i<nums.length;i++){
        if(nums[i]%2===0){
            even.push(nums[i]);
        }
        else{
            odd.push(nums[i]);
        }
    }
    let j=0;
    let k=0;

    for(let i=0;i<nums.length;i++){
        if(i%2==0){
            res.push(even[j]);
            j++;
        }
        else{
            res.push(odd[k]);
            k++;
        }
    }
    return res;
};