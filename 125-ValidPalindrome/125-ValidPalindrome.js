// Last updated: 3/6/2026, 2:09:35 PM
/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
   let lowerStr = s.toLowerCase();
   let res = "";

   for(let k=0;k<lowerStr.length;k++){
    if((lowerStr[k] >= "a" && lowerStr[k]<="z") || (lowerStr[k]>="0" && lowerStr[k]<="9")){
        res = res + lowerStr[k];
    }
   }

   let i=0;
   let j=res.length-1;

   while(i<j){
    if(res[i] != res[j]){
        return false
    }
    i++;
    j--;
   }
   return true;
};