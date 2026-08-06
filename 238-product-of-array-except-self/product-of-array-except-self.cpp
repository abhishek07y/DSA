class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans(n);
        vector<int>ans2(n);
        vector<int>result(n);
        
       int prefix=1;
        for(int i =0;i<n;i++){
            prefix=prefix*nums[i];
            ans[i] = prefix;
        }
        int suffix=1;
        for(int i=n-1;i>=0;i--){
            suffix=suffix*nums[i];
            ans2[i] = suffix;
        }
        for(int i=0;i<n;i++){
            if(i==0){
                result[i]=ans2[i+1];
            }
            else if(i==n-1){
                result[i]=ans[i-1];
            }
            else{
                result[i]=ans[i-1]*ans2[i+1];

            }
            
        }
        // result[0]=ans2[0];
        // result[n-1]=ans[n-2];
        return result;
            
        
    }
};