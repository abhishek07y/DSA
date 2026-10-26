class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n= nums.size();
        vector<int>ans(n+1,0);
        vector<int>ans1;
        for(int i=0;i<n;i++){
            ans[nums[i]]=1;
            
        }
        for(int i=1;i<=n;i++){
            if(ans[i]==0){
                ans1.push_back(i);
            }
        }
        return ans1;
        
    }
};