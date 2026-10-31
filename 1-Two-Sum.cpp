class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> numMap;
        int n = nums.size();
        for(int i = 0; i < n; i ++){
           int ans = target - nums[i];

           if(numMap.find(ans) != numMap.end()){
            return {numMap[ans],i};
           }
           numMap[nums[i]] = i;
        }
        return {};
    }
};