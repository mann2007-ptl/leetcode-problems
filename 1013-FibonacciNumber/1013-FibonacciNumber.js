// Last updated: 3/6/2026, 2:09:15 PM
/**
 * @param {number} n
 * @return {number}
 */
var fib = function(n) {
   if(n == 0){
    return 0;
   }
   else if(n == 1){
    return 1;
   }
   else{
    return fib(n-1)+fib(n-2);
    }
};