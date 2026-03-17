// Last updated: 3/17/2026, 10:57:44 AM
1/**
2 * @param {string[]} sentences
3 * @return {number}
4 */
5var mostWordsFound = function(sentences) {
6    let maxWords = 0;
7
8    for(let i=0;i<sentences.length;i++){
9        let words = sentences[i].split(" ").length;
10
11        if(words > maxWords){
12            maxWords = words;
13        }
14    }
15    return maxWords;
16};