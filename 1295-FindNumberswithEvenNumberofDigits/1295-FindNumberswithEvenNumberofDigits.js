// Last updated: 3/11/2026, 12:00:57 PM
1/**
2 * @param {number[]} nums
3 * @return {number}
4 */
5var findNumbers = function(nums) {
6    let value = 0;
7    for(let i=0;i<nums.length;i++){
8        let count=0;
9        let temp = nums[i];
10        while(temp!=0){
11            let digit = temp%10;
12            count++;
13            temp=Math.floor(temp/10);
14        }
15
16        if(count%2==0){
17            value++;
18        }
19    }
20    return value;
21};