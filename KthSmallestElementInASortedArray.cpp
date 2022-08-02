
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
