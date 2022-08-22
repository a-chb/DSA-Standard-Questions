Approch: 01 Sliding Window using Set TC-> O(N)

Runtime: 37 ms, faster than 39.67% of C++ online submissions for Longest Substring Without Repeating Characters.
Memory Usage: 13.5 MB, less than 14.68% of C++ online submissions for Longest Substring Without Repeating Characters.
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        set<char> chars;
        int ans = 0, i = 0, j = 0;
        while(i < n && j < n){
            // cout << i << " " << j << endl;
            if(chars.find(s[j]) == chars.end()){
                //move head forward
                chars.insert(s[j]);
                ans = max(ans, j-i+1);
                j++;
            }else{
                //move tail forward
                chars.erase(s[i]);
                i++;
            }
        }
        
        return ans;
    }
};
  
Approch: 02 Sliding Window using Map TC-> O(N) Optimized

Runtime: 27 ms, faster than 54.85% of C++ online submissions for Longest Substring Without Repeating Characters.
Memory Usage: 8.5 MB, less than 48.46% of C++ online submissions for Longest Substring Without Repeating Characters.
  
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        map<char, int> position;
        int ans = 0;
        
        for(int i = 0, j = 0; j < n; j++){
            if(position.find(s[j]) != position.end()){
                i = max(i, position[s[j]]+1);
            }
            ans = max(ans, j-i+1);
            position[s[j]] = j;
        }
        
        return ans;
    }
};
