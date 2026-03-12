// Last updated: 3/12/2026, 2:30:46 PM
1/**
2 * @param {string} s
3 * @return {boolean}
4 */
5var doesAliceWin = function(s) {
6    for(let i=0;i<s.length;i++){
7        if(s[i]=="a" || s[i]=="e" || s[i]=="i" || s[i]=="o" || s[i]=="u"){
8            return true;
9        }
10    }
11    return false;
12};