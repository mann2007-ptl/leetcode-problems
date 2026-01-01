// Last updated: 3/6/2026, 2:08:23 PM
/**
 * @param {string} s
 * @return {number}
 */
var countKeyChanges = function(s) {
    s=s.toLowerCase();
    let count = 0;

    for(let i=0;i<s.length-1;i++){
        if(s[i]!=s[i+1]){
          count++;
        }
    }
    return count;
};