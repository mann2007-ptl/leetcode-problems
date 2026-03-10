// Last updated: 3/10/2026, 11:52:18 AM
1/**
2 * @param {string} s
3 * @return {string}
4 */
5var largestEven = function(s) {
6    for(let i=s.length-1;i>=0;i--){
7        if(s[i]=="2"){
8            return s.slice(0,i+1);
9        }
10    }
11    return "";
12};