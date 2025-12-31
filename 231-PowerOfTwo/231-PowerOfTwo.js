// Last updated: 3/6/2026, 2:09:26 PM
/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfTwo = function(n) {
    if(n<=0){
        return false;
    }
    while(n%2==0){
        n=n/2;
    }
    if(n===1){
        return true;
    }
    else{
        return false;
    }
};