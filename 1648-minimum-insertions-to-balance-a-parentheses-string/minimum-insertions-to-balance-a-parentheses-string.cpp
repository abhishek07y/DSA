class Solution {
public:
    int minInsertions(string s) {
        int n=s.size();
        stack<char>st;
        int open=0;
        int need=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if (need % 2 == 1) {
                    ans++;
                    need--;
                }
                need=need+2;
            }
            else if (s[i]==')'){
                need--;
                if(need<0){
                    need=1;
                    ans++;
                }
                   
            }
            
        }
        return ans+need;
        
        

    }
};