// Last updated: 7/17/2026, 4:28:04 PM
/**
 * @param {number[]} prices
 * @return {number}
 */
var maxProfit = function (prices) {
    let minPrice = Infinity;
    let maxPrice = 0;

    for(let i=0;i<prices.length;i++){
        minPrice = Math.min(minPrice, prices[i]);
        maxPrice = Math.max(maxPrice , prices[i]-minPrice);
    }

    return maxPrice;
};