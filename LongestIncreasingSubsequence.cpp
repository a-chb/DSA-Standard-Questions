Longest Increasing Subsequence

Given an integer array nums, return the length of the longest strictly increasing subsequence.
A subsequence is a sequence that can be derived from an array by deleting some or no elements without changing the order of the remaining elements.
For example, [3,6,2,7] is a subsequence of the array [0,3,1,6,2,2,7].

 

Example 1:
Input: nums = [10,9,2,5,3,7,101,18]
Output: 4
Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.

	
	||================================================>Solution<================================================||
	
	
Runtime: 10 ms, faster than 93.16% of C++ online submissions for Longest Increasing Subsequence.
Memory Usage: 10.4 MB, less than 88.72% of C++ online submissions for Longest Increasing Subsequence.

  Approch : 01
  
int lengthOfLIS(vector<int>& nums) {
  vector<int> ans;

		for(auto it: nums) {
			int n = ans.size();
			if(n == 0 or it > ans[n-1]) ans.push_back(it);
			else{
				auto it1 = lower_bound(ans.begin(), ans.end(), it);
				*it1 = it;
			}
		}

		return ans.size();
    }
};

Approch: 02
  
int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        return check(0,-1,nums, n);
        set<int> st;
        st.insert(nums[0]);
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            auto itr=st.lower_bound(nums[i]);
            if(itr==st.end())
                st.insert(nums[i]);
            else
            {
                st.erase(*itr);
                st.insert(nums[i]);
            }
        }
        return st.size();
      }
};
