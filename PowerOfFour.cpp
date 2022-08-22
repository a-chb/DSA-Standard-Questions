Given an integer n, return true if it is a power of four. Otherwise, return false.
An integer n is a power of four, if there exists an integer x such that n == 4x.

Example 1:
Input: n = 16
Output: true

Example 2:
Input: n = 5
Output: false


||============================================>Solution<============================================||

Runtime: 0 ms, faster than 100.00% of C++ online submissions for Power of Four.
Memory Usage: 5.9 MB, less than 24.97% of C++ online submissions for Power of Four.
  
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0) return 0;
        while(n > 1){
            if(n%4!=0){
                return 0;
            }
            n=n/4;
        }
        return n==1;
    }
};
