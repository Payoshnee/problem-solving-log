class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();
        int currMin = 0;
        int globalMin = nums[0];
        int currMax = 0;
        int globalMax = nums[0];
        int total = 0;
        for(int i = 0; i < n; i++){
            currMax = max(nums[i],currMax + nums[i]);
            globalMax = max(globalMax,currMax);
            currMin = min(nums[i], currMin + nums[i]);
            globalMin = min(globalMin, currMin);
            total += nums[i];
        }
        if(globalMax < 0){
            return globalMax;
        }
    return max(globalMax, total - globalMin);
    }
};