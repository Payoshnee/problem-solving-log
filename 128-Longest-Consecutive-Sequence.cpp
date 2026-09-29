class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        if (nums.empty()) 
            return 0;
        set<int> numsSet(nums.begin(), nums.end());
        vector<int> numsVector(numsSet.begin(),numsSet.end());
        int n = numsVector.size();
        int maxLen = 1;
        int currLen = 1;
        
        for(int i = 1; i<n; i++){
            if((numsVector[i] - numsVector[i-1]) == 1){
                currLen++;
                maxLen = max(maxLen, currLen);
            }
            else{
                currLen = 1;
            }
        }
        return maxLen;
    }
};
// 100 4 200 1 3 2
//numsSet = 1 2 3 4 100 200