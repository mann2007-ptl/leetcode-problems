// Last updated: 3/17/2026, 10:54:22 AM
1/**
2 * @param {string} sentence
3 * @return {boolean}
4 */
5var checkIfPangram = function(sentence) {
6    let checkstr = "abcdefghijklmnopqrstuvwxyz";
7
8    for(let i=0;i<checkstr.length;i++){
9        if(!sentence.includes(checkstr[i])){
10            return false;
11        }
12    }
13    return true
14};