// Last updated: 7/17/2026, 4:23:23 PM
/**
 * @param {string} s
 * @return {string}
 */
var largestEven = function(s) {
    for(let i=s.length-1;i>=0;i--){
        if(s[i]=="2"){
            return s.slice(0,i+1);
        }
    }
    return "";
};