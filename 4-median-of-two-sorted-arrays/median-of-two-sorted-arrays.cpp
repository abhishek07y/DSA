class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        double  median =0.0;
        vector<int>ans;
        int j =0;
        int i=0;
        while(j<n && i<m){
        if(nums1[j]<nums2[i]){
            ans.push_back(nums1[j]);
            j++;
        }
        else{
            ans.push_back(nums2[i]);
            i++;
        }
        
        }
         while (j < n) {
            ans.push_back(nums1[j]);
            j++;
        }

        while (i < m) {
            ans.push_back(nums2[i]);
            i++;
        }
    int x=ans.size();
    int z=0;
    
    if(x % 2 == 0){
         median = (ans[x/2] + ans[(x/2)-1]) / 2.0;
    }
    else{
        median = (ans[x/2]);

    }
   



return median;
   
    

    }
};