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
