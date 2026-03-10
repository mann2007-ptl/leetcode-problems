// Last updated: 3/10/2026, 11:32:17 AM
1/**
2 * @param {string} num
3 * @return {string}
4 */
5var removeTrailingZeros = function(num) {
6    for(let i=num.length-1;i>=0;i--){
7        if(num[i]=="0"){
8            num=num.slice(0,i);
9        }
10        else{
11            break;
12        }
13    }
14    return num
15};