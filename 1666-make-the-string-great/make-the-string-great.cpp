class Solution {
public:
    string makeGood(string s) {
        int n =s.size();
        stack<char>st;
        string ans="";
        for(int i=0 ;i<n;i++){
            if(!st.empty() && st.top()!=s[i] && tolower(st.top())==tolower(s[i])){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans.insert(ans.begin(),st.top());
            st.pop();
        }
        return ans;



        
    }
};