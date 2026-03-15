// Last updated: 3/15/2026, 8:34:36 PM
1/**
2 * @param {number} n
3 * @param {number} w
4 * @param {number} maxWeight
5 * @return {number}
6 */
7var maxContainers = function(n, w, maxWeight) {
8    let value1 = n*n;
9    let value2 = Math.floor(maxWeight/w);
10
11    if(value1 < value2){
12        return value1;
13    }
14    else{
15    return value2;
16    }
17};