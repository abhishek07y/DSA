class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        int max=*max_element(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            while(nums[i]!=max){
                nums[i]++;
                count=count+1;
            }
        }
        return count;
        
        
    }
};