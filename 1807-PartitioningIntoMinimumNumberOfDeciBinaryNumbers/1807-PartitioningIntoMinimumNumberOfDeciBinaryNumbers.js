// Last updated: 7/17/2026, 4:26:05 PM
/**
 * @param {string} n
 * @return {number}
 */
var minPartitions = function(n) {
    let value = n.split("").map(Number);
    return Math.max(...value)
};