// Last updated: 3/6/2026, 2:08:37 PM
/**
 * @param {number} celsius
 * @return {number[]}
 */
var convertTemperature = function(celsius) {
     let Kelvin = celsius + 273.15;
    let Fahrenheit = celsius * 1.80 + 32.00;

    return [Kelvin,Fahrenheit];
};