// Last updated: 3/6/2026, 2:08:55 PM
/**
 * @param {number} num
 * @return {number}
 */
var maximum69Number  = function(num) {
   let string =  num.toString();
    let newArr = string.split("");
   for(let i=0;i<newArr.length;i++){
       if(newArr[i]==="6"){
           newArr[i]="9";
           break;
       }
   }
   let res = newArr.join("");
   return Number(res);
};

console.log(maximum69Number(9669));