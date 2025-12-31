// Last updated: 3/6/2026, 2:09:44 PM
/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
    if(x<0){
        return false;
    }
    else{
        let temp = x;
        let rev = 0;
        while(temp > 0){
            let digit = temp % 10;
            rev = rev*10 + digit;
            temp = Math.floor(temp/10);
        }
        if(rev == x){
            return true;
        }
        else{
            return false;
        }
    }
};