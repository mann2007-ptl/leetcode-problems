// Last updated: 3/6/2026, 2:09:13 PM
/**
 * @param {string} moves
 * @return {boolean}
 */
var judgeCircle = function(moves) {
    let upCount = 0;
    let rightCount = 0;
    let leftCount = 0;
    let downCount = 0;

    for(let i=0;i<moves.length;i++){
        if(moves[i]==="U"){
            upCount++;
        }
        else if(moves[i]==="D"){
            downCount++;
        }
        else if(moves[i]==="R"){
            rightCount++;
        }
        else{
            leftCount++;
        }
    }

    if(upCount === downCount && rightCount === leftCount){
        return true;
    }
    else{
        return false;
    }
};