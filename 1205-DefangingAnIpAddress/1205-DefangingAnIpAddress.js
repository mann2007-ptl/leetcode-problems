// Last updated: 3/6/2026, 2:09:02 PM
/**
 * @param {string} address
 * @return {string}
 */
var defangIPaddr = function(address) {
    let res="";
    for(let i=0;i<address.length;i++){
        if(address[i]==="."){
            res=res+"[.]";
            continue;
        }
        res=res+address[i];
    }
    return res;
};