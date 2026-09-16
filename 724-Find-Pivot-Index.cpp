class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixSum(n);
        prefixSum[0] = nums[0];
        for(int i = 1; i < n; i++){
            prefixSum[i] = prefixSum[i - 1] + nums[i];
        }
        for(int i = 0; i < n; i++){
            int leftSum = (i==0) ? 0 : prefixSum[i - 1];
            int rightSum = prefixSum[n -1] - prefixSum[i];

        if(leftSum == rightSum){
            return i;
        }
    }
        return -1;
    }
};