// Last updated: 3/6/2026, 2:08:48 PM
/**
 * @param {number[][]} accounts
 * @return {number}
 */
var maximumWealth = function(accounts) {
    let largest = 0;
    for(let i=0;i<accounts.length;i++){
        let sum = 0;
        for(let j=0;j<accounts[i].length;j++){
           sum = sum + accounts[i][j];
           if(accounts[j] > largest){
            largest = accounts[j];
           }
           if(sum > largest){
            largest = sum;
           }
        }
    }
    return largest
};

