// Last updated: 3/6/2026, 2:08:24 PM
/**
 * @param {string[]} words
 * @param {character} x
 * @return {number[]}
 */
var findWordsContaining = function(words, x) {
    let res = [];
    for(let i=0;i<words.length;i++){
        if(words[i].includes(x)){
            res.push(i);
        }
    }
    return res;
};