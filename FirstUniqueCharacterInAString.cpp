Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

Example 1:
Input: s = "leetcode"
Output: 0

Example 2:
Input: s = "loveleetcode"
Output: 2

Example 3:
Input: s = "aabb"
Output: -1

||========================================>Solution<========================================||
    
Runtime: 60 ms, faster than 48.06% of C++ online submissions for First Unique Character in a String.
Memory Usage: 10.8 MB, less than 15.57% of C++ online submissions for First Unique Character in a String.
  
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> um;
        for(auto c: s){
            um[c]++;
        }
        for(int i =0;i<s.size();i++){
            if (um[s[i]]==1) return i;
        }
        return -1;
    }
};
