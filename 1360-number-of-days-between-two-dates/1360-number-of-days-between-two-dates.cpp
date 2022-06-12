class Solution {
    map<int, int> month;
    
public:
    
    Solution(){
        month[1] = 31;
        month[2] = 28;
        month[3] = 31;
        month[4] = 30;
        month[5] = 31;
        month[6] = 30;
        month[7] = 31;
        month[8] = 31;
        month[9] = 30;
        month[10] = 31;
        month[11] = 30;
        month[12] = 31;
    }
    
    int daysBetweenDates(string date1, string date2) {
        vector<int> d1 = parse(date1);
        vector<int> d2 = parse(date2);
        
        return abs(days(d1) - days(d2));
    
    }
    
    vector<int> parse(string date){
        vector<int> d;
        string::size_type sz;
        
        d.push_back(stoi(date, &sz));
        
        string temp = date.substr(sz + 1);
        d.push_back(stoi(temp, &sz));
        
        temp = temp.substr(sz + 1);
        d.push_back(stoi(temp));
        
        return d;
    }
    
    int days(vector<int>& date){
        int years = (date[0] - 1900);
        int leapYears = (years - 1)/4;
        
        int days = (years - 1 - leapYears) * 365 + leapYears * 366;
        // previous months added
        for(int i = 1; i < date[1]; i++){
            days += month[i];
        }
        // Adding number of days
        days += date[2];
        
        // Current year is a leap year -> February
        if(date[1] > 2 && ((date[0] % 4 == 0 && date[0] % 100 != 0) || date[0] % 400 == 0) )
            days++;
            
        return days;
    }
};