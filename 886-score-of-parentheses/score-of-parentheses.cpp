class Solution {
public:
    int scoreOfParentheses(string s) {
        int n=s.size();
        stack<int>st;
        st.push(0);
       for(int i=0;i<n;i++){
        if(s[i]=='('){
            st.push(0);

        }
        else{
            int x=st.top();
            st.pop();
            if(x==0){
                st.top()+=1;
            }
            else{
                st.top()=st.top()+2*x;
            }
        }
       
        
        }
        return st.top();
    }
    
};