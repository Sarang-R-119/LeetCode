class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums = nums1;
        nums.insert(nums.end(), nums2.begin(), nums2.end());
        sort(nums.begin(), nums.end());
        
        double final = (nums.size()%2 == 0) ? ((double)(nums[nums.size() / 2 - 1] + nums[nums.size() / 2])/2) : nums[(nums.size() + 1) / 2 - 1];
//         for(auto iter: nums){
            
//             cout << iter;
//         }
        return final;
    }
};