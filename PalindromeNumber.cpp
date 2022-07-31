Given an integer x, return true if x is palindrome integer.
An integer is a palindrome when it reads the same backward as forward.
For example, 121 is a palindrome while 123 is not.
Example 1:
Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.

Example 2:
Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
  
Example 3:
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.


||==============================Solution==============================||
  
  Runtime: 3 ms, faster than 14.60% of C++ online submissions for Palindrome Number.
  Memory Usage: 5.9 MB, less than 31.87% of C++ online submissions for Palindrome Number.
  
  
  Approch: 1 //Convert the number to a string, revert it and compare
  
  class Solution {
public:
    bool isPalindrome(int x) {
        string rev = to_string(x);
        reverse(rev.begin(), rev.end());
        return to_string(x) == rev;
    }
};

Approch: 2 //Convert the number to a string, then use two pointers at beginning and end to check if it's a palindrome.
  
  class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int i = 0, j = s.size()-1;
        while (i <= j) if (s[i++] != s[j--]) return false;
        return true;
    }
};


Approch: 3 //Reverse the second half of the number and then compare.
  
  class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) return false;
        int rev = 0;
        while (rev < x) {
            rev = rev * 10 + x % 10;
            x /= 10;
        }
        
        return x == rev || x == rev / 10;
    }
};
