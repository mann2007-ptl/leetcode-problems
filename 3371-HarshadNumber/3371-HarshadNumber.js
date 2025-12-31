// Last updated: 3/6/2026, 2:08:20 PM
/**
 * @param {number} x
 * @return {number}
 */
var sumOfTheDigitsOfHarshadNumber = function (x) {
    let num = x;
    let sum = 0;

    while (num > 0) {
        let digit = num % 10;
        num = Math.floor(num / 10);
        sum = sum + digit;
    }

    if (x % sum === 0) {
        return sum;
    }
    else {
        return -1;
    }
};