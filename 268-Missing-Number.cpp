class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> s1;
        int n = nums.size();
        s1.insert(nums.begin(), nums.end());
        for(int i = 0; i <= n; i++){
            if(s1.find(i) == s1.end()){
                return i;
            }
        }
    return -1;

    }
};
// s2 = [0 1 2]
// s1 = [0,1]
// 