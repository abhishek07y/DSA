class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n= nums.size();
        vector<int>ans;

        sort(nums.begin(),nums.end());
        for(int i=0 ;i<n-1;i++){
            if(nums[i]%k==0){
                if(nums[i]!=nums[i+1])
                ans.push_back(nums[i]);    
            }
        }
        if(nums[n-1]%k==0){
            ans.push_back(nums[n-1]); 

        }
        int m=ans.size();
        if (m == 0 || ans[0] != k) {
            return k;
        }
        for(int i=0;i<m-1;i++){
            if(ans[i]!=ans[i+1]-k){
                return ans[i]+k;
            }
        }
        return ans[m-1]+k;
        
    }
};