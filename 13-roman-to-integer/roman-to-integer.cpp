class Solution {
public:
    int romanToInt(string s) {
        int n = s.size();
        int count = 0;

        for (int i = 0; i < n; i++) {


            if (s[i] == 'I') {
                if (i + 1 < n && 
                    (s[i + 1] == 'V' || s[i + 1] == 'X'))
                    count = count - 1;
                else
                    count = count + 1;
            }

            if (s[i] == 'V') {
                count = count + 5;
            }

            if (s[i] == 'X') {
                if (i + 1 < n && 
                    (s[i + 1] == 'L' || s[i + 1] == 'C'))
                    count = count - 10;
                else
                    count = count + 10;
            }

            if (s[i] == 'L') {
                count = count + 50;
            }

            if (s[i] == 'C') {
                if (i + 1 < n && 
                    (s[i + 1] == 'D' || s[i + 1] == 'M'))
                    count = count - 100;
                else
                    count = count + 100;
            }

            if (s[i] == 'D') {
                count = count + 500;
            }

            if (s[i] == 'M') {
                count = count + 1000;
            }
        }

        return count;
    }
};

