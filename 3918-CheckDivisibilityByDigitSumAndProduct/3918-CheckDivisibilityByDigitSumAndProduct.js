// Last updated: 3/6/2026, 2:08:09 PM
/**
 * @param {number} n
 * @return {boolean}
 */
var checkDivisibility = function(n) {
    let sum = 0;
    let product = 1;
    let temp = n;

    while(temp > 0){
        let digit = temp % 10;
        sum = sum + digit;
        product = product * digit;
        temp = Math.floor(temp/10);
    }

    let result = sum + product

    return n % result === 0;
};

console.log(checkDivisibility(99));