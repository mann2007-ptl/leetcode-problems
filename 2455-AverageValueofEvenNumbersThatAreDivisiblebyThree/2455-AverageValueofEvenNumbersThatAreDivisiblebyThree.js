// Last updated: 3/11/2026, 11:57:40 AM
1/**
2 * @param {number[]} nums
3 * @return {number}
4 */
5var averageValue = function(nums) {
6    let avg=0;
7    let sum=0;
8    let count=0;
9
10    for(let i=0;i<nums.length;i++){
11        if(nums[i]%2===0 && nums[i]%3===0){
12            count++;
13            sum=sum+nums[i];
14        }
15    }
16
17    if(sum==0 || count==0){
18        return 0;
19    }
20    avg=Math.floor(sum/count);
21    return avg;
22};