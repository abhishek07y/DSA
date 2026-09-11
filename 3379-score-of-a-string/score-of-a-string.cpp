class Solution {
public:
    int scoreOfString(string s) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=abs((int)s[i+1]-(int)s[i]);


        }
        return sum;
        

    }
};