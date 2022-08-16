Given an array of strings strs, group the anagrams together. You can return the answer in any order.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Example 1:
Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

Example 2:
Input: strs = [""]
Output: [[""]]

Example 3:
Input: strs = ["a"]
Output: [["a"]]

||===========================>Solution<===========================||

Runtime: 34 ms, faster than 95.06% of C++ online submissions for Group Anagrams.
Memory Usage: 20.7 MB, less than 41.38% of C++ online submissions for Group Anagrams.
  
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector <vector<string>> v;
        unordered_map<string,vector<string>> um;
        for(int i=0; i<strs.size();i++){
            string key = strs[i];
            sort(key.begin(),key.end());
            um[key].push_back(strs[i]);
        }
        for( auto x: um){
            v.push_back(x.second);
        }
        return v;
    }
};
