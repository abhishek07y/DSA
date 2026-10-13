class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b) {
            return abs(a) < abs(b);
       });

        int n=nums.size();
        int i=0;
        int j=n-1;
        long long  pos=0;
        long long neg=0;
        if(n==1){
            return nums[0]*nums[0];
        }

        while(i<=j){
            pos+=1LL*nums[j]*nums[j];
            j--;
            neg+=1LL*nums[i]*nums[i];
            i++;
            if (i == j) {
                pos += 1LL * nums[j] * nums[j];
            }


        }
        return pos-neg;
        
    }
};