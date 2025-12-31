// Last updated: 3/6/2026, 2:08:18 PM
/**
 * @param {string} s
 * @return {number}
 */
var scoreOfString = function (s) {
    let totalScore = 0;
    for (let i = 1; i < s.length; i++) {
        let char1 = s.charCodeAt(i);
        let char2 = s.charCodeAt(i - 1);

        let difference = Math.abs(char2 - char1)

        totalScore = totalScore + difference
    }
    return totalScore;
};