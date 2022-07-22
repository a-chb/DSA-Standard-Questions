Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.
  
  
/*--------------------Solution--------------------*/  
  
Runtime: 2 ms, faster than 76.65% of C++ online submissions for Merge Sorted Array.
Memory Usage: 9.1 MB, less than 29.13% of C++ online submissions for Merge Sorted Array.
  
Brute-Force Solution (100% Faster ) Time Complexity : O(N)+O(NlogN)
  
/*--------------------Code Begins--------------------*/  

 class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<n;i++)
        {
            nums1[m+i]=nums2[i];
        }
        sort(nums1.begin(),nums1.end());
    }
};

/*--------------------Code Ends--------------------*/
