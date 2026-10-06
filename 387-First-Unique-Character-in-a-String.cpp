// class Solution {
// public:
//     int firstUniqChar(string s) {
//         int n = s.size();
//         for (int i = 0; i < n; i++) {
//             bool isUnique = true;
//             for (int j = 0; j < n; j++) {
//                 if (i != j && s[i] == s[j]) {
//                     isUnique = false;
//                     break;
//                 }
//             }

//             if (isUnique)
//                 return i;
//         }
//         return -1;
//     }
// };
class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> freq(26,0);

        for(char c : s){
            freq[c - 'a']++;
        }
        for(int i = 0; i < s.size();i++){
            if(freq[s[i] - 'a'] == 1){
                return i;
            }
            
        }
        return -1;
    }
};