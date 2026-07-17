// Last updated: 7/17/2026, 4:23:38 PM
/**
 * @param {number} n
 * @param {number} w
 * @param {number} maxWeight
 * @return {number}
 */
var maxContainers = function(n, w, maxWeight) {
    let value1 = n*n;
    let value2 = Math.floor(maxWeight/w);

    if(value1 < value2){
        return value1;
    }
    else{
    return value2;
    }
};