 bool sortCond(vector<int> a, vector<int> b){
        return a[1] > b[1];
    }

class Solution {
public:
    
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
       
        // Descending acc to box units O(n*log(n))
        std::sort(boxTypes.begin(), boxTypes.end(), sortCond);
        
        int remBoxes = truckSize;
        int i = 0;
        int maxUnits = 0;
        
        // Worst case O(n)
        while(remBoxes > 0 && i < boxTypes.size()){
            int boxCount = min(remBoxes, boxTypes[i][0]);
            
            remBoxes -= boxCount;
            maxUnits += boxCount * boxTypes[i][1];
            i++;
        }
        
        return maxUnits;
    }
};

