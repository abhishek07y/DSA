class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> mp;
        int count = 0;
         for(int x : nums) {   
            mp[x]++;
        }
        for(auto it:mp){
            count =count+ (it.second *(it.second-1))/2;
        }
        return count;


        
        
    }
};