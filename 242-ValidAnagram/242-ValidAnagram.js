// Last updated: 3/6/2026, 2:09:25 PM
/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    
    if(s.length != t.length){
        return false;
    }

    let obj1 = {};
    let obj2 = {};

    for(let char of s){
        if(char == " "){
            continue;
        }
        else if(obj1[char]){
           obj1[char]++;
        }
        else{
            obj1[char] = 1;
        }
    }

    for(let char of t){
        if(char == " "){
            continue;
        }
        else if(obj2[char]){
            obj2[char]++;
        }
        else{
            obj2[char] = 1;
        }
    }

    for(let char in obj1){
        if(obj1[char] !== obj2[char]){
            return false;
        }
    }
    return true;
};