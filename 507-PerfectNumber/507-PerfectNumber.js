// Last updated: 3/9/2026, 4:46:13 PM
1/**
2 * @param {number} num
3 * @return {boolean}
4 */
5var checkPerfectNumber = function(num) {
6    let sum = 0;
7    for(let i = 1; i < num; i++){
8        if(num % i === 0){
9            sum += i;
10        }
11    }
12    return sum === num;
13};
14