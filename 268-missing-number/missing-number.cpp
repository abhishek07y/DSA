class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int>freq(n+1);
        for(int i=0;i<n;i++){
            freq[nums[i]]=1;

        }
        for(int i=0;i<freq.size();i++){
            if(freq[i]<1){
                return i;
                
            }
        }
        return 0;
        
    }
};