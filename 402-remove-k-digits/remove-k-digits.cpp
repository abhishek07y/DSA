class Solution {
public:
    string removeKdigits(string num, int k) {
        int n=num.size();
        stack<char>st;
        // if(k==num.size()){
        //     return "0";
        // }
        for(int i=0;i<n;i++){
            while(!st.empty()&& k>0 && st.top()>num[i] ){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k>0){
            st.pop();
            k--;
        }

        string ans="";
        while(!st.empty()){
            ans.insert(ans.begin(),st.top());
            st.pop();

        }
        // return ans;
        int i=0;
        while(i<ans.size() && ans[i]=='0'){
            i++;
        }
        string result = ans.substr(i);
        
        if(result.empty()){
            return "0";
        }
        else{
            return result;
        }

        
    }
};