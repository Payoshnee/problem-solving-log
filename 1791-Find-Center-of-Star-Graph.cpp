class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size()+1;
        vector<int> starDegree(n+1,0);
        for(auto& it : edges){
            starDegree[it[0]]++;
            starDegree[it[1]]++;
        }
        for(int i = 1; i <= n; i++){
            if(starDegree[i] == n-1)
                return i;
            
        }
        return -1;
    }
};
// [0,0,0,0,0]
// [0,1,1,0,0]
// [0,1,2,1,0]
// [0,1,3,1,1]