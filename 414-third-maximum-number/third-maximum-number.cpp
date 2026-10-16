class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        long long first = LLONG_MIN;
        long long second = LLONG_MIN;
        long long thired = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            if (nums[i] > first) {
                first = nums[i];
            }
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] > second && nums[i] < first) {
                second = nums[i];
            }
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] > thired && nums[i] < first && nums[i] < second) {
                thired = nums[i];
            }
        }

        if (thired == LLONG_MIN) {
            return first;
        } else {
            return thired;
        }
    }
};
