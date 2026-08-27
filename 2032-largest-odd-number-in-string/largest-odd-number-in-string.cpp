class Solution {
public:
    string largestOddNumber(string num) {
        int x = num.size() - 1;

        while(x >= 0) {
            if((num[x] - '0') % 2 != 0) {
                return num.substr(0, x + 1);
            }
            else {
                x--;
            }
        }

        return "";
    }
};