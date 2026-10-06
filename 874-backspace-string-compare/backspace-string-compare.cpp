class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int n=t.size();
        int m=s.size();
        string s1="";
        string t1="";
        stack<char>st;
        for(int i=0;i<n;i++){
            if(t[i]=='#' ){
                if(!st.empty())
                    st.pop();
            }
            else{
            st.push(t[i]);
            }

        }
        while(!st.empty()){
            t1.push_back(st.top());
            st.pop();
        }
        for(int i=0;i<m;i++){
            if(s[i]=='#'){
                if(!st.empty())
                    st.pop();
            }
            else{
            st.push(s[i]);
            }

        }
        while(!st.empty()){
            s1.push_back(st.top());
            st.pop();
        }
        if(s1==t1){
            return true;
        }
        else{
            return false;
        }
        
    }
};