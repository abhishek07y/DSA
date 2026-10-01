class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int>st;
        int n=ast.size();
        for(int i=0;i<n;i++){
            while(!st.empty() && ast[i]<0 && st.top()>0){
                int sum=ast[i]+st.top();
                if(sum<0){
                    st.pop();
                }
                if(sum>0){
                    ast[i]=0;
                    break;

                }
                if(sum==0){
                    st.pop();
                    ast[i]=0;
                    
                    break;
                    

                }

            }
            if(ast[i]!=0){
                st.push(ast[i]);
            }
        }
        vector<int> ans;

    while (!st.empty()) {
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin(), ans.end());
    return ans;





        
    }
};