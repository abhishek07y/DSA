class Solution {
public:
    string addStrings(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();

        string ans = "";
        int carry = 0;

        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());

        int i = 0, j = 0;

        while (i < n && j < m) {

            int x = (num1[i] - '0') + (num2[j] - '0') + carry;

            ans.push_back((x % 10) + '0');

            carry = x / 10;

            i++;
            j++;
        }

        while (i < n) {
            int x = (num1[i] - '0') + carry;

            ans.push_back((x % 10) + '0');

            carry = x / 10;

            i++;
        }

        while (j < m) {
            int x = (num2[j] - '0') + carry;

            ans.push_back((x % 10) + '0');

            carry = x / 10;

            j++;
        }

        if (carry) {
            ans.push_back(carry + '0');
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};