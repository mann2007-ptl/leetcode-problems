// Last updated: 7/17/2026, 4:24:36 PM
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double fahrenheit = celsius * 1.80 + 32.00;

        return {kelvin , fahrenheit};
    }
};