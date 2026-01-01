// Last updated: 3/6/2026, 2:08:41 PM
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var sortEvenOdd = function(nums) {
    let odd = [];
    let even = [];
    let res = [];

    for(let i=0;i<nums.length;i++){
        if(i%2==0){
            even.push(nums[i]);
        }
        else{
            odd.push(nums[i]);
        }
    }

    even = even.sort((a,b)=> a-b);
    odd = odd.sort((a,b)=> b-a);
    let j=0;k=0;
    for(let i=0;i<nums.length;i++){
        if(i%2==0){
            res.push(even[j])
            j++;
        }
        else{
            res.push(odd[k]);
            k++;
        }
    }
    return res;
};