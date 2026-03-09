// Last updated: 3/9/2026, 4:41:23 PM
1/**
2 * @param {number[]} nums1
3 * @param {number[]} nums2
4 * @return {number[]}
5 */
6var intersection = function(nums1, nums2) {
7    let obj1 = {};
8    let obj2 = {};
9    let res = [];
10
11    for(let char of nums1){
12        if(obj1[char]===undefined){
13            obj1[char]=1;
14        }
15        else{
16            obj1[char]++;
17        }
18    }
19
20    for(let char of nums2){
21        if(obj2[char]===undefined){
22            obj2[char]=1;
23        }
24        else{
25            obj2[char]++;
26        }
27    }
28
29    for(let value in obj1){
30        if(obj2[value]!=undefined){
31            res.push(Number(value))
32        }
33    }
34    return res;
35};