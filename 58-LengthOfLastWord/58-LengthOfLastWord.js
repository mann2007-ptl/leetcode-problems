// Last updated: 3/6/2026, 2:09:40 PM
/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    let res = "";
    let length = false;
    for(let i=s.length-1;i>=0;i--){
        if(s[i]!==" "){
            length = true;
            res = res + s[i];
        }
        else if(length){
            break;
        }
    }
    return res.length;
};