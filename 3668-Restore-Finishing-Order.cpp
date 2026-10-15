class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int m = order.size();
        int n = friends.size();
        vector<int> ans;
        int first = 0;
        int second = 0;
        for(int i = 0; i <m;i++){
            for(int j = 0; j <n; j++){
                if(order[i] == friends[j]){
                    ans.push_back(order[i]);
                    first++;
                    second++;
                }
            }
        }
        return ans;
    }
};