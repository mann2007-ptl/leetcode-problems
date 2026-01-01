// Last updated: 3/6/2026, 2:09:31 PM
var isHappy = function(n) {

    while (n !== 1 && n !== 4) {

        let temp = n;
        let sum = 0;   

        while (temp > 0) {
            let digit = temp % 10;
            sum = sum + digit * digit;
            temp = Math.floor(temp / 10);
        }

        n = sum;  
    }

    return n === 1;
};

console.log(isHappy(19)); 
console.log(isHappy(2));  