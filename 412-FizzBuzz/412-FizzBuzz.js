// Last updated: 3/6/2026, 2:09:17 PM
/**
 * @param {number} n
 * @return {string[]}
 */
var fizzBuzz = function (n) {
    let res = [];
    for (let i = n; i >= 1; i--) {
        if (i % 3 === 0 && i % 5 === 0) {
            res.unshift("FizzBuzz");
        }
        else if (i % 3 === 0) {
            res.unshift("Fizz");
        }
        else if (i % 5 === 0) {
            res.unshift("Buzz");
        }
        else {
            res.unshift(String(i));
        }
    }
    return res;
};