// Last updated: 7/17/2026, 4:24:24 PM
/**
 * @param {string} num
 * @return {string}
 */
var removeTrailingZeros = function(num) {
    for(let i=num.length-1;i>=0;i--){
        if(num[i]=="0"){
            num=num.slice(0,i);
        }
        else{
            break;
        }
    }
    return num
};