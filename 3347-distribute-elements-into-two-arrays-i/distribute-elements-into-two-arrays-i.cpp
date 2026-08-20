class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr1;
        vector<int>arr2;
        
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]); 
        int j = 0;
        int k=0;
        int i=2;
        while(i<n){
            if(arr1[j]>arr2[k]){
                arr1.push_back(nums[i]);
                j++;
                i++;
            }
            else{
                arr2.push_back(nums[i]);
                k++;
                i++;
            }

        }
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
        return arr1;
        
            

        

        
    }
};