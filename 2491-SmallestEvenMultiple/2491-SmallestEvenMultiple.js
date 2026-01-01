// Last updated: 3/6/2026, 2:08:42 PM
/**
 * @param {number} n
 * @return {number}
 */
var smallestEvenMultiple = function(n) {
    if(n%2==0){
        return n;
    }
    else{
        return 2*n;
    }
};