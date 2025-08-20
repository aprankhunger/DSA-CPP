// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int start = 0,end = nums.size()-1,mid;
//         if (end == 0)
//         return 0;
//         if(end == 1){
//             if(nums[end]>nums[end-1]){
//                 return end;
//             }
//             else{
//                 return 0;
//             }
//         }
//         while(start<=end){
//             mid = start+(end-start)/2;
//             if(nums[mid]>=nums[mid+1] && nums[mid]>=nums[mid-1]){
//                 return mid;
//             }else if(nums[mid]<nums[mid-1]){
//                 end = mid-1;
//             }
//             else{
//                 start = mid+1;
//             }
//         }
//         return -1;
//     }
// };
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int start = 0, end = nums.size() - 1;

        while (start < end) {
            int mid = start + (end - start) / 2;

            // If mid element is less than its next, peak must be on the right
            if (nums[mid] < nums[mid + 1]) {
                start = mid + 1;
            } 
            else {
                // Otherwise, peak is at mid or on the left side
                end = mid;
            }
        }

        return start; // or end, both will be same here
    }
};
