#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = -1, maxLen = 0;
        vector<int> dict(200, -1);
        
        for(int i=0 ; i<s.length() ; i++){
            if(dict[s[i]] > start){
                start = dict[s[i]];
            }
            dict[s[i]] = i;
            maxLen = max(maxLen, i-start);
        }
        return maxLen;
    }
};

// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         int longest = 0;
//         bool occur[200] = {0};
//         for(int i=0 ; i<s.length() ; i++){
//             fill(occur, occur+200, false);
//             int currLen = 0;
//             for(int j=i ; j<s.length() ; j++){
//                 if(occur[s[j]]) break;
//                 currLen++;
//                 occur[s[j]] = true;                
//             }
//             longest = max(longest, currLen);
//         }
//         return longest;
//     }
// };






int main(){

    return 0;
}