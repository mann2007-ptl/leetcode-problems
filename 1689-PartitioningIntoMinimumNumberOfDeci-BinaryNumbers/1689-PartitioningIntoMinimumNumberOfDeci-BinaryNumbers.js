// Last updated: 3/14/2026, 10:27:36 PM
1/**
2 * @param {string} n
3 * @return {number}
4 */
5var minPartitions = function(n) {
6    let value = n.split("").map(Number);
7    return Math.max(...value)
8};