// Last updated: 3/6/2026, 2:08:07 PM
/**
 * @param {number[]} order
 * @param {number[]} friends
 * @return {number[]}
 */
var recoverOrder = function(order, friends) {
    let res = [];

    for(let i=0;i<order.length;i++){
        for(let j=0;j<friends.length;j++){
            if(order[i] === friends[j]){
                res.push(order[i]);
            }
        }
    }
    return res;
};