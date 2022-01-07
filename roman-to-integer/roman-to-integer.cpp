class Solution {
public:
    int romanToInt(string s) {
        map<char, int> dict= {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int result = 0;
        
        for (int i = 0; i < s.length(); i++){
            if(i + 1 < s.length() && dict[s[i]] < dict[s[i + 1]]){
                result += dict[s[i + 1]] - dict[s[i]];
                i++;
            }
            else{
                result += dict[s[i]];
            }
        }
        
        return result;
    }
};