class Solution {
public:
    int evalRPN(vector<string>& token) {
        int n =token.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(!st.empty() &&token[i]=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b+a);
            }
            else if(!st.empty() && token[i]=="*"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b*a);

            }
            else if (!st.empty() && token[i]=="/"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b/a);
            }
            else if(!st.empty() && token[i]=="-"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                st.push(b-a);

            }
            else if (token[i]!="+" && token[i]!="*" && token[i]!="-" && token[i]!="/"){
                st.push(stoi(token[i]));
            }
           
            
        }
        return st.top();

        
    }
};