class Solution {
public:
    bool isPalindrome(int x) {
        int o=x;
        long long rev=0;
        if (x < 0) return false;
        while(x>0){
           int m=x%10;
            rev = rev * 10 + m;
            x=x/10;
        }
        if(o==rev){
            return true;
        }
        else{
            return false;
        }
    }
};