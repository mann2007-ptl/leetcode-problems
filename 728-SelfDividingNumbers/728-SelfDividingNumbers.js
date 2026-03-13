// Last updated: 3/13/2026, 10:14:28 AM
1/**
2 * @param {number} left
3 * @param {number} right
4 * @return {number[]}
5 */
6var selfDividingNumbers = function(left, right) {
7    let res = [];
8
9    for(let i=left;i<=right;i++){
10        let num = i;
11
12        while(num>0){
13            let remainder = num % 10;
14
15            if(remainder === 0 || i%remainder != 0){
16                break;
17            }
18            num = Math.floor(num/10);
19        }
20
21        if(num===0){
22            res.push(i);
23        }
24    }
25    return res;
26};