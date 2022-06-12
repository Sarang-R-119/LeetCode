class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        //Hashmap
        int sum = 0;
        
        for(int i = 0; i < nums.size(); i++){
            sum ^= nums[i];
        }
    
        return sum;
    }
    
    /*
    int singleNumber(vector<int>& nums) {
        //Hashmap
        map<int, int> dict;
        
        for(int i = 0; i < nums.size(); i++){
            if(dict.find(nums[i]) != dict.end()){
                dict[nums[i]] += 1;
            }else dict[nums[i]] = 1;
        }
        for(int i = 0; i < nums.size(); i++){
            if(dict[nums[i]] == 1)
                return nums[i];
        }
        return 0;
    }*/
};