// Last updated: 3/6/2026, 2:08:46 PM
/**
 * @param {string} s
 * @return {number}
 */
var secondHighest = function(s) {
    let largest = -1;
    let secondLargest = -1;
    for(let i=0;i<s.length;i++){
        if(s[i]>= "0" && s[i]<="9"){
            let digit = parseInt(s[i]);
            if(digit>largest){
                secondLargest = largest;
                largest = digit;
            }
            else if(digit<largest && digit>secondLargest){
                secondLargest = digit;
            }
        }
    }
    return secondLargest;
};