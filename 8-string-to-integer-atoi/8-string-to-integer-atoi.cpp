class Solution {
    map<char, int> digits;
public:
    
    Solution(){
        digits['0'] = 0;
        digits['1'] = 1;
        digits['2'] = 2;
        digits['3'] = 3;
        digits['4'] = 4;
        digits['5'] = 5;
        digits['6'] = 6;
        digits['7'] = 7;
        digits['8'] = 8;
        digits['9'] = 9;
    }
    
    int myAtoi(string s) {
        int i = 0, sign = 1, num = 0, mult = 0;
        bool maxmincase = false;
        
        // All the initial checks will not need to be checked again
        // Unnecessary work in BUD
        // Removing leading whitespace
        while(s[i] != '\0' && s[i] == ' ')
            i++;
        
        
        // Checking possible signs
        if(s[i] != '\0'){
            if(s[i] == '-'){
                sign = -1;
                i++;
            }else if(s[i] == '+')
                i++;
        }
        
        // Checking if the letter is a number
        while(s[i] != '\0' && digits.find(s[i]) != digits.end()){
            
            // INT_MAX is 2**31 - 1
            if(num > 100000000){
                if(sign == -1){
                    if(num > -(INT_MIN/10) || (num == -(INT_MIN/10) && digits[s[i]] >= -(INT_MIN%10))){
                        return INT_MIN;
                    }
                }else if(num > INT_MAX/10 || (num == INT_MAX/10 && digits[s[i]] >= INT_MAX%10)){
                    return INT_MAX;
                }
                    
            }
            
            num = num * 10 + digits[s[i]];
            i++;   
        }
        
        if(sign == -1)
            num *= sign;
        
        return num;
    }
};