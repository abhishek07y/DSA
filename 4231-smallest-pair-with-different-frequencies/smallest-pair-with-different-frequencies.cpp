class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        map<int ,int>mp;
        int n=nums.size();
        for(int i=0 ;i<n ;i++){
            mp[nums[i]]++;
        }
        if(mp.size()<2){
            return {-1,-1};
        }

        int minFreq = 0;
        int num =INT_MAX;
        for(auto it:mp){
            if(it.first <num ){
                minFreq = it.second;
                num=it.first;

            }
        }
        int num1 =INT_MAX;
        int minFreq1 = 0;

        for(auto it:mp){
            if(it.first > num && it.second != minFreq){
                minFreq = it.second;
                num1=it.first;
                break;

            }
        }
        if(num1==INT_MAX){
            return {-1,-1};
        }
        return {num,num1};
      
       
        
        
        
        
    }
};