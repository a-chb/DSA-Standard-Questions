/*---------------------------------------Solution---------------------------------------*/

Runtime: 19 ms, faster than 5.15% of C++ online submissions for Search in Rotated Sorted Array.
Memory Usage: 11.1 MB, less than 75.00% of C++ online submissions for Search in Rotated Sorted Array.

Time -> O (logn)
/*---------------------------------------Code Begins---------------------------------------*/

class Solution {
public:
    int getPivot(vector<int>& nums, int n){
        int s =0;
        int e = n-1;
        int mid = s+ (e-s)/2;
        
        while(s<e){
          if(nums[mid] >= nums[0])
        {
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s + (e-s)/2;  
        }
        return s;
        
    }
    
    
    int binarySearch(vector<int>& nums,int s, int e, int key){
        int start = s;
        int end = e;
        
        int mid = start + (end-start)/2;
        
        while(start<=end){
            if(nums[mid]==key) return mid;
            
            if(key>nums[mid]) {start = mid+1;}
            else {end = mid-1;}
            
            mid= start+(end-start)/2;
            
        }
        return -1;
    }
    
    
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = getPivot(nums,n) ;
        if(target>=nums[pivot] && target <= nums[n-1]){
            return binarySearch(nums,pivot,n-1,target);
        }else{
            return binarySearch(nums,0,pivot-1,target);
        }
    }
};

/*---------------------------------------Code Ends---------------------------------------*/
