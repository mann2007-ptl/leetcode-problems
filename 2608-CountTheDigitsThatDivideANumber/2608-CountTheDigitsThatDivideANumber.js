// Last updated: 3/6/2026, 2:08:35 PM
/**
 * @param {number} num
 * @return {number}
 */
var countDigits = function(num) {
    let temp = num;
    let count =0;

    while(temp > 0){
        let digit = temp % 10;
        if(num % digit === 0){
            count++;
        }
        temp = Math.floor(temp/10);
    }
    return count;
};