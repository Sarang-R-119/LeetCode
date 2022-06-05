class Solution {
public:
    int countBinarySubstrings(string s) {
        int prev = 0, curr = 1, sum =0;
        // Prev is the group before
        for ( int i = 1; i < s.length(); i++){
            if(s[i] != s[i- 1]){
                sum += min(curr, prev);
                prev = curr;
                curr = 1;
            }
            else
                curr++;
        }
        
        return sum + min(curr, prev);
    }
};