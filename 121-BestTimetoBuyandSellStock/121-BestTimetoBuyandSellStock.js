// Last updated: 3/15/2026, 8:48:25 PM
1/**
2 * @param {number[]} prices
3 * @return {number}
4 */
5var maxProfit = function (prices) {
6    let minPrice = Infinity;
7    let maxPrice = 0;
8
9    for(let i=0;i<prices.length;i++){
10        minPrice = Math.min(minPrice, prices[i]);
11        maxPrice = Math.max(maxPrice , prices[i]-minPrice);
12    }
13
14    return maxPrice;
15};