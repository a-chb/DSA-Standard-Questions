Given an m x n matrix mat of integers, sort each matrix diagonal in ascending order and return the resulting matrix.

Example 1:
Input: mat = [[3,3,1,1],[2,2,1,2],[1,1,1,2]]
Output: [[1,1,1,1],[1,2,2,2],[1,2,3,3]]

Example 2:
Input: mat = [[11,25,66,1,69,7],[23,55,17,45,15,52],[75,31,36,44,58,8],[22,27,33,25,68,4],[84,28,14,11,5,50]]
Output: [[5,17,4,1,52,7],[11,11,25,45,8,69],[14,23,25,44,58,15],[22,27,31,36,50,66],[84,28,75,33,55,68]]

||========================================>Solution<========================================||

Runtime: 49 ms, faster than 5.15% of C++ online submissions for Sort the Matrix Diagonally.
Memory Usage: 8.7 MB, less than 88.57% of C++ online submissions for Sort the Matrix Diagonally.
  
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        for(int k = 0; k + 1 < mat.size(); k++)
             for(int i = 0; i + 1 < mat.size(); i++)
                for(int j = 0; j + 1 < mat[i].size(); j++)
                    if(mat[i][j] > mat[i + 1][j + 1])
                        swap(mat[i][j], mat[i + 1][j + 1]);   
        return mat;
    }
};  

