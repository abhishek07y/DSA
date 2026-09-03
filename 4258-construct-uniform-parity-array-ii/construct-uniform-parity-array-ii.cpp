class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int mini = *min_element(nums1.begin(),nums1.end());

        int even = 0;
        int odd = 0;

        for(int i = 0; i < n; i++) {
            if(nums1[i] % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }
        }

        if(even == n || odd == n) {
            return true;
        }
        if(mini % 2 == 1) {
            return true;
        }

        return false;
    }

        
    
};