Given an integer n, return true if it is a power of three. Otherwise, return false.
An integer n is a power of three, if there exists an integer x such that n == 3x.

Example 1:
Input: n = 27
Output: true

Example 2:
Input: n = 0
Output: false

Example 3:
Input: n = 9
Output: true

||================================================>Solution<================================================||
  
    Runtime: 50 ms, faster than 15.85% of C++ online submissions for Power of Three.
    Memory Usage: 6 MB, less than 29.00% of C++ online submissions for Power of Three.

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0) return 0;
         while(n > 1){
            if(n%3!=0){
                return 0;
            }
            n=n/3;
        }
        return n==1;
    }
};
