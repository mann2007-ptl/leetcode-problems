// Last updated: 3/6/2026, 2:08:53 PM
/**
 * @param {number[]} candies
 * @param {number} extraCandies
 * @return {boolean[]}
 */
var kidsWithCandies = function (candies, extraCandies) {
    let greatestCandies = 0;
    for (let i = 0; i < candies.length; i++) {
        if (candies[i] > greatestCandies) {
            greatestCandies = candies[i];
        }
    }
    let result = [];

    for(let i=0;i<candies.length;i++){
        if(candies[i] + extraCandies >= greatestCandies){
            result.push(true);
        }
        else{
            result.push(false);
        }
    }
    return result;
};