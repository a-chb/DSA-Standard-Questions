Given a string s, reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

Example 1:
Input: s = "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
  
Example 2:
Input: s = "God Ding"
Output: "doG gniD"

||================================================>Solution<================================================||

Runtime: 41 ms, faster than 21.18% of C++ online submissions for Reverse Words in a String III.
Memory Usage: 11.4 MB, less than 30.04% of C++ online submissions for Reverse Words in a String III.
  
class Solution {
public:
    string reverseWords(string s) {
        int start=0;
        int end=0;
        string str=s;
        str +=" ";
        for(int i=0;i<=s.length();i++){
            if(str[i]==' '){
                reverse(str.begin()+start,str.begin()+i);
                start=i+1;
            }
        }
        return str.substr(0,str.size()-1);
    }
};
