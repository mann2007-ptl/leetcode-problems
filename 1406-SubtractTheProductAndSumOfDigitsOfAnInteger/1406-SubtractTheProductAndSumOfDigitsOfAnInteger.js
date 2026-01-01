// Last updated: 3/6/2026, 2:08:59 PM
/**
 * @param {number} n
 * @return {number}
 */
var subtractProductAndSum = function(n) {
    let sum=0;
    let prod=1;
    let temp=n;
    while(temp>0){
        let digit = temp%10;
        sum = sum + digit;
        prod = prod * digit;
        temp = Math.floor(temp/10);
    }
    return prod-sum;
};