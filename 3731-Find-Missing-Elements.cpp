class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int minVal = *min_element(nums.begin(),nums.end());
        int maxVal = *max_element(nums.begin(),nums.end());
        unordered_set<int> numsSet(nums.begin(),nums.end());
        vector<int> ans;

        for(int i = minVal;i<= maxVal;i++){
            if(numsSet.find(i) == numsSet.end()){
                ans.push_back(i);
            }
        }
        return ans;

    }
};