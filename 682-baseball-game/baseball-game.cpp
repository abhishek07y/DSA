class Solution {
public:
    int calPoints(vector<string>& op) {
        int n=op.size();
        stack<int>st;
        int sum=0;
        for(int i=0 ;i<n;i++){
            if(op[i]=="C"){
                st.pop();

            }
            else if(op[i]=="D"){
                st.push(st.top() * 2);
            }
            else if(op[i] == "+") {
                int a = st.top();
                st.pop();

                int b = st.top();

                st.push(a);
                st.push(a + b);
            }
            else{
                st.push(stoi(op[i]));
            }

        }
        while(!st.empty()){
            
           
            sum=sum+st.top();
            st.pop();
        }
        return sum;

        
    }
};