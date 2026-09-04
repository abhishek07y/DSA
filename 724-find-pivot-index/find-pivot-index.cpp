class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        int suml=0;
        int sumr=0;
        for(int i=0 ;i<n;i++){
            total+=nums[i];
        }
        for(int i=0 ;i<n; i++){
            int sumr = total - suml - nums[i];
            if(suml==sumr){
                return i;
            }
            suml=suml+nums[i];

        }
        return -1;

    
        
    }
};