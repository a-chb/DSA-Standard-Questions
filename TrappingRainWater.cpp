Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. 
In this case, 6 units of rain water (blue section) are being trapped.

    
  ||========================================>Solutions<========================================||
    
    
Runtime: 24 ms, faster than 53.61% of C++ online submissions for Trapping Rain Water.
Memory Usage: 19.7 MB, less than 90.14% of C++ online submissions for Trapping Rain Water.
  
  
 /*----------------------------Code Begins----------------------------*/
 
 class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int result =0;
        int left = 0; int right =n-1;
        int maxLeft= 0,  maxRight =0;
        
        while(left<right){
            
            if(height[left]<=height[right]){
                
                if(height[left]>=maxLeft) maxLeft=height[left];
                else result += maxLeft-height[left];
                
                left++;
            }
            else{
                if(height[right]>=maxRight)  maxRight= height[right];
                else result += maxRight-height[right];
                
                right--;
            }
        }
        return result;
    }
};
    
 /*----------------------------Code Ends----------------------------*/
