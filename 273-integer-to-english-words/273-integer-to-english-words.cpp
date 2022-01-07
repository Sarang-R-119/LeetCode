class Solution {
    
    map<int, string> english;
    vector<int> segments;
public:
    
    Solution(){
        english[0] = "Zero";
        english[1] = "One";
        english[2] = "Two";
        english[3] = "Three";
        english[4] = "Four";
        english[5] = "Five";
        english[6] = "Six";
        english[7] = "Seven";
        english[8] = "Eight";
        english[9] = "Nine";
        english[10] = "Ten";
        english[11] = "Eleven";
        english[12] = "Twelve";
        english[13] = "Thirteen";
        english[14] = "Fourteen";
        english[15] = "Fifteen";
        english[16] = "Sixteen";
        english[17] = "Seventeen";
        english[18] = "Eighteen";
        english[19] = "Nineteen";
        english[20] = "Twenty";
        english[30] = "Thirty";
        english[40] = "Forty";
        english[50] = "Fifty";
        english[60] = "Sixty";
        english[70] = "Seventy";
        english[80] = "Eighty";
        english[90] = "Ninety";
        //          0           1        2     3    4   5
        segments = {1000000000, 1000000, 1000, 100, 20, 10};

    }
            
    string numberToWords(int num) {
        
        if(num == 0)
            return english[num];
        else
            return recurs(num);
    }
    
    string recurs(int num){
        if(num > 0 && num < segments[4]){
            return english[num];
        }
        else if(num >= segments[4] && num < segments[3]){
            if(num % segments[5] == 0)
                return (english[(num / segments[5]) * 10]);
            else
                return (english[(num / segments[5]) * 10] + " " + recurs(num % segments[5]));
            
        }
        else if(num >= segments[3] && num < segments[2]){
            
            if(num % segments[3] == 0)
                return (recurs(num/segments[3]) + " Hundred");
            else
                return (recurs(num/segments[3]) + " Hundred " + recurs(num % segments[3]));
        }
        else if(num >= segments[2] && num < segments[1]){
            if(num % segments[2] == 0)
                return (recurs(num/segments[2]) + " Thousand");
            else
                return (recurs(num/segments[2]) + " Thousand " + recurs(num % segments[2]));
            
        }
        else if(num >= segments[1] && num < segments[0]){
            if(num % segments[1] == 0)
                return (recurs(num/segments[1]) + " Million");
            else
                return (recurs(num/segments[1]) + " Million " + recurs(num % segments[1]));
        }
        else if(num >= segments[0]){
            if(num % segments[0] == 0)
                return (recurs(num/segments[0]) + " Billion");
            else
                return (recurs(num/segments[0]) + " Billion " + recurs(num % segments[0]));
            
        }
        
        return "";
    }
};