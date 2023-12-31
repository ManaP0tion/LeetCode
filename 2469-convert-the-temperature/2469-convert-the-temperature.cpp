class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> ans;
        double kelvin = celsius + 273.15;
        ans.push_back(kelvin);
        kelvin = celsius*1.8 + 32.0;
        
        ans.push_back(kelvin);
        return ans;
    }
};