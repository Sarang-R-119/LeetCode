class Solution {
public:
    int firstUniqChar(string s) {
        vector<char> repeating;
        int position = 0;
        
        for(int i = 0; i < s.length(); i++){
            bool found = false;
            // Not found in the repeating set of chars
            if(find(repeating.begin(), repeating.end(), s[i]) == repeating.end()){
                
                for(int j = i + 1; j < s.length(); j++){
                
                    if(s[i] == s[j]){
                        repeating.push_back(s[i]);
                        found = true;
                        break;
                    }
                }
                
                if(!found){
                    return i;
                }
            }
        }
        
        return -1;
    }
};