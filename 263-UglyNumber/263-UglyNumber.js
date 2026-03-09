// Last updated: 3/9/2026, 5:34:23 PM
1/**
2 * @param {number} n
3 * @return {boolean}
4 */
5var isUgly = function (n) {
6    let arr = [2, 3, 5];
7    if (n <= 0) {
8        return false;
9    }
10    for (let value of arr) {
11        while (n % value === 0) {
12            n = n / value;
13        }
14    }
15    return n == 1
16};