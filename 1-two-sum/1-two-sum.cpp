class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int, int> dict;
        for(int i = 0; i<nums.size(); i++){
            
            if(dict.find(nums[i]) != dict.end()){
                return {dict[nums[i]], i};
            }
                
            dict[target - nums[i]] = i;
            
        }
            
        return {};
    }
};
    
/*
vector<int> twoSum(vector<int>& nums, int target) {
      
    map<int, int> diff;
    vector<int> indices;
        
    for (int i = 0; i < nums.size(); i++){
        diff[target - nums[i]] = i;
    }
    
    for (int i = 0; i < nums.size(); i++){
        if(diff.find(nums[i]) != diff.end() && diff[nums[i]] != i)
        {
            indices = {diff[nums[i]], i};
            break;
        }
    }
    return indices;
    }
*/
    
    
        
/*    map<int, int> map1; // Create map for storing the differences of target and value in array

    for (int i = 0; i < nums.size(); i++)
    {
        map1.insert(pair<int, int>(target - nums[i], i));
    } // Do calculations

    for (int j = 0; j < nums.size(); j++)
    {
        map<int,int>::iterator iter = map1.find(nums[j]); // Check to find if difference is a value in array
        if(iter != map1.end() && iter->second != j) // If difference is present and indices are not equal, return a vector of those indices
        {
            return vector<int>{iter->second, j};
        }
    }

    return vector<int>();

    }
*/