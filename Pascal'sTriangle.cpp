Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:

                  1
                1   1
              1   2   1
            1   3   3   1
          1   4   6   4   1
        1   5   10  10  5   1
  
Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]

/*-------------------------------------Solution-------------------------------------*/


Runtime: 0 ms, faster than 100.00% of C++ online submissions for Pascal's Triangle.
Memory Usage: 6.5 MB, less than 31.97% of C++ online submissions for Pascal's Triangle.

/*-------------------------------------Code Begins-------------------------------------*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector<int>> r(numRows);
        for(int i =0;i<numRows;i++){
            r[i].resize(i+1);
            r[i][0]=r[i][i]=1;
            for(int j=1;j<i;j++)
                r[i][j]=r[i-1][j-1]+r[i-1][j];
        }
        return r;
    }
};

/*-------------------------------------Code Ends-------------------------------------*/
