class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // bf
        /*for (int i = 0; i < nums.size(); i++){
            for (int j = i+1; j < nums.size(); j++){
                if(nums[i] == nums[j]){
                    return true;
                }
            }
        }*/
        
        // sorted
        /*sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] == nums[i+1])
                return true;
        }*/
        
        // hash maps
        map<int, int> dict; 
        for (int i = 0; i < nums.size(); i++){
            if(dict.find(nums[i]) != dict.end())
                return true;
            else
                dict[nums[i]] = 1;
        }
        
        
        
        return false;
    }
};