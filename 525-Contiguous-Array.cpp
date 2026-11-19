class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> numMap;
        vector<int> prefix(n);
        prefix[0] = (nums[0] == 0) ? -1 : 1;
        for(int i = 1; i <n;i++){
            int val = (nums[i] == 0) ? -1 : 1;
            prefix[i] = prefix[i-1]+ val;
        }
        int maxLen = 0;
        numMap[0] = -1;

        for(int i = 0; i < n;i++){
            int curr = prefix[i];
            if(numMap.find(curr) != numMap.end()){
                maxLen = max(maxLen, i - numMap[curr]);
            }
            else{
                numMap[curr] = i;
            }
        }
        return maxLen;
    }
};