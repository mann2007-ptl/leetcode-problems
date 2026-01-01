// Last updated: 3/6/2026, 2:08:28 PM
/**
 * @param {number[]} hours
 * @param {number} target
 * @return {number}
 */
var numberOfEmployeesWhoMetTarget = function(hours, target) {
    let count = 0;
    for(let i=0;i<hours.length;i++){
        if(hours[i]>=target){
          count++;
        }
    }
    return count;
};