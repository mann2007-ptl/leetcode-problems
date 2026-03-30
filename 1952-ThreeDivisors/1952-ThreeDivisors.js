// Last updated: 3/30/2026, 2:12:08 PM
1/**
2 * @param {number} n
3 * @return {boolean}
4 */
5var isThree = function(n) {
6    let count = 0;
7    for(let i=1;i<=n;i++){
8        if(n%i==0){
9            count++;
10        }
11    }
12
13    if(count==3){
14        return true;
15    }
16    return false;
17};