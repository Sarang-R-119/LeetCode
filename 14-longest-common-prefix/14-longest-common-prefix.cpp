class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string fw = strs[0];
        string prefix = "";
        
        if(strs.size() <= 1){
            return fw;
        }
        // Assuming the prefix can be the entire string
        
        // Compare the first string with the rest
        for (int i = 0; i < fw.length(); i++){
            cout << "Hello";
            bool found = true;
            
            // Checking the other strings in the vector
            for (int j =1 ; j < strs.size(); j++){
                cout << "World";
                // Comparing the letter of each string
                // Edge case: i is in bounds of the new string
                if(i == strs[j].size() || strs[j][i] != fw[i]){
                    found = false;
                    break;
                }
            }
            
            // If the letter is not found
            if(!found){
                break;
            }else{
                prefix += fw[i];
            }
        }
        
        return prefix;
    }
};