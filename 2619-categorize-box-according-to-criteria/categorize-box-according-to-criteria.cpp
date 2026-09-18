class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        
        long long volume = 1LL * length * width * height;

        if ((length >= 10000 || width >= 10000 || height >= 10000 || volume >= 1000000000) 
            && mass >= 100) {
            return "Both";
        }

        if (length >= 10000 || width >= 10000 || height >= 10000 || volume >= 1000000000) {
            return "Bulky";
        }

        if (mass >= 100) {
            return "Heavy";
        }

        return "Neither";
    }
};