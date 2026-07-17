// Last updated: 7/17/2026, 4:27:24 PM
/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersection = function(nums1, nums2) {
    let obj1 = {};
    let obj2 = {};
    let res = [];

    for(let char of nums1){
        if(obj1[char]===undefined){
            obj1[char]=1;
        }
        else{
            obj1[char]++;
        }
    }

    for(let char of nums2){
        if(obj2[char]===undefined){
            obj2[char]=1;
        }
        else{
            obj2[char]++;
        }
    }

    for(let value in obj1){
        if(obj2[value]!=undefined){
            res.push(Number(value))
        }
    }
    return res;
};