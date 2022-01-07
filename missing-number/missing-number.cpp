class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int maxnums = nums[0];
        
        for(int num : nums){
            maxnums = max(num, maxnums);    
        }
        
        if(n != maxnums)
            return n;
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); i++){
            if(i != nums[i]){
                return i;
            }
        }
        
        return 0;
        
    }
};