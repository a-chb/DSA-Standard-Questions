
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

  
/*------------------------Code Begins--------------------------------*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int water = 0;
        
        int i = 0, j = height.size()-1;
        while(i < j){
            
            int h = min(height[i], height[j]);
            water = max(h*(j-i), water);
            
            if(height[i] <= height[j])
                i++;
            else j--;
        }
        return water;
    }
};
/*--------------------------Code Ends------------------------------*/
