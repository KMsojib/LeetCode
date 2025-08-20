/*
# Problem          : 2469. Convert the Temperature
# Time Complexity  : O(n)
# space Complexity : O(1)
# C++ Solution
*/

class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kelvin = celsius + 273.15;
        double Fahrenheit = celsius * 1.80 + 32.00;

        return {kelvin, Fahrenheit};
    }
};