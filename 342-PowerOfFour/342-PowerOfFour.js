// Last updated: 3/6/2026, 2:09:20 PM
/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfFour = function(n) {
     if(n<=0){
        return false;
    }
    while(n%4==0){
        n=n/4;
    }
    if(n===1){
        return true;
    }
    else{
        return false;
    }
};