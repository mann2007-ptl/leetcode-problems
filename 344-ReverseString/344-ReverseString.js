// Last updated: 3/6/2026, 2:09:19 PM
/**
 * @param {character[]} s
 * @return {void} Do not return anything, modify s in-place instead.
 */
var reverseString = function(s) {
    let i=0;
    let j=s.length-1;

    while(i<j){
        let temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
};