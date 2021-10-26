class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        // To store the letters for the substring
        vector<char> letters;
        // To store the substrings and their lengths
        multimap<int, string> substrings;
        
        // If the string is empty
        if(s.empty()){
            return 0;
        }
        
        for(char& c : s) {
            // If a repeating character appears
            auto result = std::find(letters.begin(), letters.end(), c);
            
            if ( !letters.empty() && result != letters.end()){
                
                string substring(letters.begin(), letters.end());
                
                substrings.insert(pair<int, string> (substring.length(), substring));
                // cout << substring << endl;
                // letters.clear();
                letters.erase(letters.begin(), result + 1);
                letters.push_back(c);
            }
            else{
                letters.push_back(c);
            }
        }
        
        // Include the last substring
        string substring(letters.begin(), letters.end());
        // cout << substring << endl;
        substrings.insert(pair<int, string> (substring.length(), substring));
        
        // cout << substrings.rbegin()->first << substrings.rbegin()->second;
        
        return substrings.rbegin()->first;
    }
};