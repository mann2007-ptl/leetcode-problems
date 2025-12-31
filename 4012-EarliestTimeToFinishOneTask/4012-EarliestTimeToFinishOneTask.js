// Last updated: 3/6/2026, 2:08:06 PM
/**
 * @param {number[][]} tasks
 * @return {number}
 */
var earliestTime = function(tasks) {
    let minSum = Infinity;
    for(let i=0;i<tasks.length;i++){
        let sum = 0;
        for(let j=0;j<tasks[i].length;j++){
            sum+=tasks[i][j];
        }
         if(sum < minSum){
                minSum = sum;
            }
    }
    return minSum;
};

console.log(earliestTime([[1,6],[2,3]]))


