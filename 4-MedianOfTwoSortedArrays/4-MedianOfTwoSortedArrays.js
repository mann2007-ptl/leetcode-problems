// Last updated: 3/6/2026, 2:09:45 PM
/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function(nums1, nums2) {
    let res = [];
    for(let i=0;i<nums1.length;i++){
        res.push(nums1[i]);
    }
    for(let j=0;j<nums2.length;j++){
        res.push(nums2[j]);
    }

    let temp;
    for (let i = 0; i < res.length; i++) {
        for (let j = 0; j < res.length - i - 1; j++) {
            if (res[j] > res[j + 1]) {
                temp = res[j];
                res[j] = res[j+1];
                res[j+1] = temp
            }
        }
    }

    
    let n = res.length;

    if(n%2==0){
        return (res[n/2-1] + res[n/2]) / 2;
    }
    else{
        return res[Math.floor(n/2)];
    }
};