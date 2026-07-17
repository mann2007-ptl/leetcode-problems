// Last updated: 7/17/2026, 4:25:56 PM
/**
 * @param {string} sentence
 * @return {boolean}
 */
var checkIfPangram = function(sentence) {
    let checkstr = "abcdefghijklmnopqrstuvwxyz";

    for(let i=0;i<checkstr.length;i++){
        if(!sentence.includes(checkstr[i])){
            return false;
        }
    }
    return true
};