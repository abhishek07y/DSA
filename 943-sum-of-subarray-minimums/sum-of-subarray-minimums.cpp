class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int>nsl(n);
        vector<int>nsr(n);
        stack<int>st;
        //nsl calulte kro 
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[i]<arr[st.top()]){
                st.pop();
                
            }
            if(st.empty()){
                nsl[i]=-1;
            }
            else{
                nsl[i]=st.top();
                

            }
            st.push(i);
        }
         while(!st.empty()) {
            st.pop();
        }
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[i]<=arr[st.top()]){
                st.pop();
                
            }
            if(st.empty()){
                nsr[i]=n;
            }
            else{
                nsr[i] = st.top();

            }
            st.push(i);
        }
        vector<long long >product;
        for(int i=0;i<n;i++){
            long long  ls=i-nsl[i];
            long long  rs=nsr[i]-i;
            long long prod = ls*rs;
            product.push_back(prod);
        }
        long long  sum=0;
        long long MOD = 1000000007;
        for(int i=0;i<n;i++){
            sum = (sum + (long long)arr[i] * product[i]) % MOD;

        }
        if(arr.size()==1){
            return arr[0];
        }
        return sum;


        
        

        
    }
};