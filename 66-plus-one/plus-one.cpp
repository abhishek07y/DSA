class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n =digits.size();
        int digit=0;
        for(int i =n-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]=digits[i]+1;
                return digits;
                // break;

            }
            else if(digits[i]==9){
                digits[i]=0;
                // digits[i-1]=digits[i-1]+1;
            }



        }
        digits.insert(digits.begin(), 1);
        return digits;
        
    }
};