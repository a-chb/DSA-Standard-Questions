Runtime: 2 ms, faster than 45.09% of C++ online submissions for Poor Pigs.
Memory Usage: 6 MB, less than 80.73% of C++ online submissions for Poor Pigs.
  
class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        return ceil(log(buckets) / log(minutesToTest / minutesToDie + 1));
    }
};
