#include <string.h>
#include <stdio.h>
class Solution {
public:
    
    static bool myCompare(string a, string b){
        size_t posa = a.find(' ');
        string ida = a.substr(0, posa);
        string loga = a.substr(posa + 1);
        
        size_t posb = b.find(' ');
        string idb = b.substr(0, posb);
        string logb = b.substr(posb + 1);
        
        if(!isdigit(loga[0]) && isdigit(logb[0]))
            return true;
        
        else if(isdigit(loga[0]) && !isdigit(logb[0]))
            return false;
        
        else if(!isdigit(loga[0]) && !isdigit(logb[0])){
            if(loga != logb)
                return loga < logb;
            else
                return ida < idb;
        }
        
        return false;
    }
    
    vector<string> reorderLogFiles(vector<string>& logs) {
       
        vector<string> result = logs;
        
        stable_sort(result.begin(), result.end(), myCompare);
        
        return result;
    }
};