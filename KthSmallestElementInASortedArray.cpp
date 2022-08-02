Given an n x n matrix where each of the rows and columns is sorted in ascending order, return the kth smallest element in the matrix.

Note that it is the kth smallest element in the sorted order, not the kth distinct element.

You must find a solution with a memory complexity better than O(n2).

 

Example 1:

Input: matrix = [[1,5,9],[10,11,13],[12,13,15]], k = 8
Output: 13
Explanation: The elements in the matrix are [1,5,9,10,11,12,13,13,15], and the 8th smallest number is 13
Example 2:

Input: matrix = [[-5]], k = 1
Output: -5


||==================================>Solution<==================================||

Time: O(M*N*logK) where M ≤ 300 is the number of rows, N ≤ 300 is the number of columns.
Space: O(K), space for heap which stores up to k elements

Runtime: 45 ms, faster than 69.61% of C++ online submissions for Kth Smallest Element in a Sorted Matrix.
Memory Usage: 14.2 MB, less than 45.52% of C++ online submissions for Kth Smallest Element in a Sorted Matrix.

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n = matrix.size();
        priority_queue<int, vector<int>> pq, t;
        
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) {
                pq.push(matrix[i][j]);
                if(pq.size()>k) 
                    pq.pop();
            }
        }
        return pq.top();
    }
};
