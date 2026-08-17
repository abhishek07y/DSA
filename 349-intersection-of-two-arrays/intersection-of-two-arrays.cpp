class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>ans;
        // vector<int>result;

        int n=nums1.size();
        int m =nums2.size();
        for(int i=0; i<n ;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    ans.insert(nums1[i]);
                }
            }
        }
        vector<int> v(ans.begin(), ans.end());
        return v;
    }
};