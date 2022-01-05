class Solution {
public:
    int romanToInt(string s) {
        // Initialization
        map<char, int> roman= {{'I', 1},{'V', 5},{'X', 10},{'L', 50},{'C', 100},{'D', 500}, {'M', 1000}};
        
        int number = 0;
        
        for (int i = 0; i < s.length(); i++){
            if(i + 1 < s.length() && roman[s[i]] < roman[s[i + 1]]){ // Assuming a valid expression
                
                number += roman[s[i + 1]] - roman[s[i]];
                i++;
            }else{
                
                number += roman[s[i]];
            }
        }
        
        return number;
    }
};