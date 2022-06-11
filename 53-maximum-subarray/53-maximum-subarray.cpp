class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = nums[0];
        int maxSum = nums[0];
        
        for ( int i = 1; i < nums.size(); i++){
            currSum = max(currSum + nums[i], nums[i]); //Kadane's alg
            maxSum = max(currSum, maxSum);
        }
        
        
        return maxSum;
    }
};