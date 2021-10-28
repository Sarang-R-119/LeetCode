class Solution {
public:
    string convert(string s, int numRows) {
        // Base case
        if(numRows == 1){
            return s;
        }
        
        string result = "";
        int increment = 2 * numRows - 2;
        
        for (int i = 0; i < numRows; i++){
            for (int j = i; j < s.length(); j += increment){
                   result += s[j];
                   if(i > 0 && i < numRows - 1 && j + increment - 2 * i < s.length()){
                       result += s[j + increment - 2 * i];
                   }
            }
        }
        return result;
    }
};