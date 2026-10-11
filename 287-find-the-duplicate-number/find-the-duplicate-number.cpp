class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int>freq(n+1,0);
        for(int i=0;i<n;i++){
        if (nums[i] >= 0 && nums[i] <= n){
            freq[nums[i]]++;
            }
        }
        for(int i=0;i<freq.size();i++){
            if(freq[i]>1){
                return i;
            }
        }
        return 0;
    
        
    }
};