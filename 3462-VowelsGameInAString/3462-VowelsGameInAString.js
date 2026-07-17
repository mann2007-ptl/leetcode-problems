// Last updated: 7/17/2026, 4:23:57 PM
/**
 * @param {string} s
 * @return {boolean}
 */
var doesAliceWin = function(s) {
    for(let i=0;i<s.length;i++){
        if(s[i]=="a" || s[i]=="e" || s[i]=="i" || s[i]=="o" || s[i]=="u"){
            return true;
        }
    }
    return false;
};