class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> seen;
        seen[0] = 0;
        int prefixSum = 0;
        int count = 0;
        for(int i = 0; i < nums.size();i++){
            prefixSum += nums[i];
            int diff = prefixSum - k;
            if(seen.find(diff) != seen.end()){
                count += seen[diff];
            }
            if(diff == 0){
                count += 1;
            }
            seen[prefixSum]++;
        }
        return count;
    }
};
//[1,1,1] k =2
// prefixSum = 0
// count =0
// seen {0:1}
// ** i = 0
// prefixSum = 1
// diff = 1-2
// -1 not in seen
// seen = {0:1,-1:1}
// count = 0

// ** i = 1
// prefixSum = 2
// diff = 2-2 = 0
// 0 is seen
// count += 1
// count =1
// seen = {0:1,-1:1,2:1}

// ** i = 2
// prefixSum = 3
// diff = 3-2 = 1
// 1 is seen
// count = 2
// seen = {0:1,-1:1,2:1}

