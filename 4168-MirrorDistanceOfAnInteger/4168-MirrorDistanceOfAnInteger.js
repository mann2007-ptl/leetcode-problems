// Last updated: 3/6/2026, 2:08:08 PM
/**
 * @param {number} n
 * @return {number}
 */
var mirrorDistance = function(n) {
    let temp = n;
    let reverse = 0;
    while(n!=0){
        let digit = n % 10;
        reverse = reverse*10 + digit;
        n = Math.floor(n/10);
    }
    let abs = Math.abs(temp - reverse)
    return abs;
};