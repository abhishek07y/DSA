class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int prefix=0;
        int suffix=0;
        int ans=-1;
        // int sum = accumulate(nums.begin(), nums.end(), 0);
        // if(sum==0){
        //     return 0;
        // }
        vector<int>pre;
        vector<int>suf;
        for(int i=0;i<n;i++){
            prefix=prefix+nums[i];
            pre.push_back(prefix);
        }
        for(int j=n-1;j>=0;j--){
            suffix=suffix+nums[j];
            suf.push_back(suffix);
            


        }
        reverse(suf.begin(),suf.end());
        for(int k =0;k<n;k++){
            
            if(suf[k]==pre[k]){
                ans=k;
                break;
            }
        }
        return ans;

        
    }
};