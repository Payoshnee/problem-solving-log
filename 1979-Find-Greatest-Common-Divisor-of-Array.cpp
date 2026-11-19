class Solution {
public:
    int findGCD(vector<int>& nums) {
        // set<int> S(nums.begin(), nums.end());
        // int n = S.size();
        int mini = *min_element(nums.begin(), nums.end());
        int max = *max_element(nums.begin(), nums.end());
        while(mini != 0){
            int temp = mini;
            mini = max%mini;
            max = temp;
        }
        return max;
    }
};
